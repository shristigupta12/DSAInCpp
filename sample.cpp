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
    if(d==-1) return NULL;
    node* root = new node(d);
    root->left= buildTree();
    root->right= buildTree();
    return root;
}

void bfs(node* root){
    if(root==NULL) return;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* n = q.front();
        if(n==NULL){
            q.pop();
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
            }
        }else{
            cout<<n->data<<" ";
            q.pop();
            if(n->left) q.push(n->left);
            if(n->right) q.push(n->right);
        }
    }
}

int height(node* root){
    if(root==NULL) return 0;
    return 1+ max(height(root->left), height(root->right));
}

class Pair{
public:
    int height;
    int diameter;
};

Pair diameterHeight(node* root){
    Pair p;
    if(root==NULL) p.height=0, p.diameter=0; return p;
    Pair left = diameterHeight(root->left);
    Pair right = diameterHeight(root->right);
    p.height = 1+max(left.height,right.height);
    p.diameter = max(left.height+right.height,max(left.diameter, right.diameter)); 
    return p;
}

int main(){
    node* root = buildTree();
    bfs(root);
    return 0;
}