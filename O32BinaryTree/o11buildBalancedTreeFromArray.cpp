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

node* buildTreeFromArray(int *a, int s, int e){
    if (s>e)
    {
        return NULL;
    }
    
    int mid = (s+e)/2;
    node* root = new node(a[mid]);
    root->left = buildTreeFromArray(a, s, mid-1);
    root->right = buildTreeFromArray(a, mid+1, e);
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

//Input : 8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1 
int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    node* root = buildTreeFromArray(a, 0, n-1);
    bfs(root);
    return 0;
}