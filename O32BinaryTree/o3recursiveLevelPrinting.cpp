#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;
    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

node* buildTree(){
    int d;
    cin>>d;
    if (d==-1)
    {
        return NULL;
    }
    node* root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

int height(node* root){
    if (root==NULL)
    {
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh,rh)+1;
}

void printLevel(node* root, int k){
    if (k==1)
    {
        if (root!=NULL)
        {
            cout<<root->data<<" ";
        }
        
        return;
    }
    printLevel(root->left, k-1);
    printLevel(root->right, k-1);
}

void print(node* root){
    int h = height(root);
    for (int i = 1; i <= h; i++)
    {
        printLevel(root, i);
        cout<<endl;
    }
}

int main(){
    node* root = buildTree();
    print(root);
    return 0;
}