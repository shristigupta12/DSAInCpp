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

int sumReplace(node* &root){
    if (root==NULL)
    {
        return 0;
    }
    if (root->left==NULL && root->right==NULL)
    {
        return root->data;
    }
    
    int leftSum = sumReplace(root->left);
    int rightSum = sumReplace(root->right);
    int temp = root->data;
    root->data = leftSum + rightSum;
    return root->data + temp;
}

int main(){
    node* root = buildTree();
    sumReplace(root);
    bfs(root);
    return 0;
}