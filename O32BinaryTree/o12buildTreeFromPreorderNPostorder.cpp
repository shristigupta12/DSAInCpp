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

node* BuildTreeFromPreTrav(int *inor, int *preor, int s, int e){
    static int p = 0;
    if (s>e)
    {
        return NULL;
    }
    
    node* root = new node(preor[p]);
    int ind = -1;
    for (int i = s; i <= e; i++)
    {
        if (inor[i]==preor[p])
        {
            ind = i;
            break;
        }  
    }
    p++; 
    root->left = BuildTreeFromPreTrav(inor, preor, s, ind-1);
    root->right = BuildTreeFromPreTrav(inor, preor, ind+1, e);
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
    int pre[] = {1, 2, 3, 4, 8, 5, 6, 7};
    int in[] = {3, 2, 8, 4, 1, 6, 7, 5};
    int n = sizeof(in)/sizeof(int);
    node * root = BuildTreeFromPreTrav(in, pre, 0, n-1);
    bfs(root);
    return 0;
}