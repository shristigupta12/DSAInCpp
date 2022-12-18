#include<iostream>
#include <bits/stdc++.h>
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

bool checkForBST(node* root, int min = INT_MIN, int max = INT_MAX){
    if (root==NULL)
    {
        return true;
    }
    if(root->data<=max && root->data>=min && checkForBST(root->left, min, root->data) && checkForBST(root->right, root->data, max)){
        return true;
    }
    return false;
}

int main(){
    node* root = build();
    if (checkForBST(root)){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}