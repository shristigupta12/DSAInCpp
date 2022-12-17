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
    inorderPrint(root);
    cout<<endl;
    bfs(root);
    return 0;
}