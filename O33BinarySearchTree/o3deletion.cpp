#include<iostream>
#include<queue>
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

node* insertInBST(node* root, int d){
    if (root==NULL)
    {
        return new node(d);
    }
    
    if (d<=root->data)
    {
        root->left = insertInBST(root->left,d);
    }else{
        root->right = insertInBST(root->right,d);  
    }
    return root;
}

node* build(){
    //Read and a list of numbers till -1 in BST
    int d;
    cin>>d;
    node* root = NULL;
    while(d!=-1){
        root = insertInBST(root, d);
        cin>>d;
    }
    return root;
}

// For deletion 3 cases can be there: 0 child, 1 child, 2 child
node* deletion(node* root, int d){
    if (root==NULL)
    {
        return NULL;
    }
    if (d<root->data)
    {
        root->left = deletion(root->left,d);
        return root;
    }
    if (d>root->data)
    {
        root->right = deletion(root->right,d);
        return root;
    }

    // 3 cases of deletion
    // 0 child
    if (root->left==NULL and root->right==NULL)
    {
        delete root;
        return NULL;
    }
    
    //2 child
    if (root->left!=NULL and root->right==NULL)
    {
        node* temp = root->left;
        delete root;
        return temp;
    }
    if (root->right!=NULL and root->left==NULL)
    {
        node* temp = root->right;
        delete root;
        return temp;
    }
    
    //3 child
    node* replace = root->right;
    while (replace->left!=NULL)
    {
        replace = replace->left;
    }
    root->data = replace->data;
    root->right = deletion(root->right, replace->data);
    return root;
}

void inorderPrint(node* root){
    if (root==NULL)
    {
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}

void bfs(node* root){
    queue<node*> q; 
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* n = q.front();
        if (n==NULL)
        {
            q.pop();
            if (!q.empty())
            {
                q.push(NULL);
                cout<<endl;
            } 
        }else{
            cout<<n->data<<" ";
            q.pop();
            if (n->left)
            {
                q.push(n->left);
            }
            if (n->right)
            {
                q.push(n->right);
            }       
        }
    }
}

int main(){
    node* root = build();
    int d;
    cin>>d;
    root = deletion(root, d);
    inorderPrint(root);
    cout<<endl;
    bfs(root);
    return 0;
}