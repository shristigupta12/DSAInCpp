#include<iostream>
using namespace std;

class node{
public:
    int d;
    node* left;
    node* right;
    node(int data){
        d = data;
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
    if (root==0)
    {
        return 0;
    }
    return max(height(root->left), height(root->right))+1;
}

class Pair{
public:
    int diameter;
    int height;
};

Pair diamOp(node* root){
    Pair p;
    if (root==NULL)
    {
        p.height = 0;
        p.diameter = 0;
        return p;
    }

    Pair lef = diamOp(root->left);
    Pair rig = diamOp(root->right);

    p.height = max(lef.height,rig.height)+1;
    p.diameter = max(lef.height+rig.height, max(lef.diameter,rig.diameter));

    return p;
} 

int main(){
    node* root = buildTree();
    Pair p = diamOp(root);
    cout<<"Height = "<<p.height<<endl;
    cout<<"Diameter = "<<p.diameter<<endl;
    return 0;
}