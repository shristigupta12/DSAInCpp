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

//find level of node
int search(node* root, int key, int level){
    if(root==NULL){
        return -1;
    }
    if (root->data==key)
    {
        return level;
    }
    int left =  search(root->left, key, level+1);
    int right = search(root->right, key, level+1);
    if (left!=-1)
    {
        return left;
    }
    return right; 
}

// find distance between nodes
int findDist(node* root, int a, int b){
    node* lca_node = lca(root, a, b);
    int a_level = search(lca_node, a, 0); 
    int b_level = search(lca_node, b, 0); 
    return a_level+b_level;
}

int main(){
    node* root = buildTree();
    int a,b;
    cin>>a>>b;
    cout<<findDist(root, a, b);
    return 0;
}