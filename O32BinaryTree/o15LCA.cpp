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
}

node* lca(node* root, int a, int b){
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data==a or root->data==b)
    {
        return root;
    }
    node* leftans = lca(root->left, a, b);
    node* rightans = lca(root->right, a, b);
    if (leftans!=NULL and rightans!=NULL)
    {
        return root;
    }
    if (leftans!=NULL)
    {
        return leftans;
    }
    return rightans;
}

int main(){
    
    return 0;
}