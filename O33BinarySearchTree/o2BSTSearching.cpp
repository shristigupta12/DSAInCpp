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

node* insertInTree(node* root, int d){
    if (root==NULL)
    {
        return new node(d);
    }
    if (d<=root->data)
    {
        root->left = insertInTree(root->left, d);
    }else{
        root->right = insertInTree(root->right, d);
    }
    return root;
}

bool searching(node* root, int data){
    if (root==NULL)
    {
        return false;
    }
    if (root->data == data)
    {
        return true;
    }
    if (data<=root->data)
    {
        return searching(root->left, data);
    }    
    return searching(root->right, data);
}

node* buildTree(){
    int d;
    cin>>d;
    node* root = NULL;
    while (d!=-1)
    {
        root = insertInTree(root, d);
        cin>>d;
    }
    return root;
}

int main(){
    node* root = buildTree();
    int s;
    cin>>s;
    if (searching(root, s))
    {
        cout<<"Present";
    }else{
        cout<<"Not Present";
    }
    return 0;
}