#include<iostream>
#include<queue>
#include<bits/stdc++.h>
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

node* buildTree(int* pre, int* in, int s, int e){
    static int p = 0;
    if(s>e){
        return NULL;
    }
    node* root = new node(pre[p]);
    int i = s;
    while (i<=e)
    {
        if(pre[p]==in[i]){
            break;
        }
        i++;
    }
    p++;
    root->left = buildTree(pre, in, s, i-1);
    root->right = buildTree(pre, in, i+1, e);
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

int main(){
    int pre[] = {5, 3, 1, 7, 6, 8};
    int n = sizeof(pre)/sizeof(int);
    int in[n];
    for (int i = 0; i < n; i++)
    {
        in[i] = pre[i];
    }
    sort(in, in+n);
    node* root = buildTree(pre, in, 0, n-1);
    bfs(root);
    return 0;
}