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

void printRightView(node* root, int clevel, int &mlevel){
    if(root==NULL){
        return;
    }
    if (mlevel<clevel)
    {
        cout<<root->data<<endl;
        mlevel = clevel;
    }
    printRightView(root->right, clevel+1, mlevel);
    printRightView(root->left, clevel+1, mlevel);
}

int main(){
    node* root = buildTree();
    int max = -1;
    printRightView(root, 0, max);
    return 0;
}