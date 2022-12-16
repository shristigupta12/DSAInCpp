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
    return root;
}

class hbpair{
public:
    int height;
    bool bal;
};

hbpair heightBalCheck(node* root){
    hbpair p;
    if (root==NULL)
    {
        p.height = 0;
        p.bal = true;
        return p;
    }

    hbpair left = heightBalCheck(root->left);
    hbpair right = heightBalCheck(root->right);

    p.height = max(left.height , right.height)+1;
    if (abs(left.height-right.height)<=1 && left.bal && right.bal){
        p.bal = true;
    }else{
        p.bal - false;
    }
    return p;
}



int main(){
    node* root = buildTree();
    hbpair p = heightBalCheck(root);
    if (p.bal)
    {
        cout<<"Balanced Tree";
    }else{
        cout<<"Unbalanced Tree";
    }
    return 0;
}