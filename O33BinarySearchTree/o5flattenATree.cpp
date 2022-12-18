// convert bst into a linked list without creating a new one
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

class linkedList{
    public:
        node* head;
        node* tail;
};

linkedList convertToLinkedList(node* root){
    linkedList l;
    if (root==NULL)
    {
        l.head = NULL;
        l.tail = NULL;
        return l;
    }
    
    if (root->left==NULL && root->right==NULL)
    {
        l.head = l.tail = root;
        return l;
    }
    if (root->left!=NULL && root->right==NULL )
    {
        linkedList leftll = convertToLinkedList(root->left);
        leftll.tail->right = root;

        l.head = leftll.head;
        l.tail = root;
        return l;
    }
    if (root->right!=NULL && root->left==NULL)
    {
        linkedList rightll = convertToLinkedList(root->right);
        root->right = rightll.head;

        l.head = root;
        l.tail = rightll.tail;
        return l;
    }
    linkedList leftll = convertToLinkedList(root->left);
    linkedList rightll = convertToLinkedList(root->right);
    leftll.tail->right = root;   
    root->right = rightll.head;

    l.head = leftll.head;
    l.tail = rightll.tail; 
    return l;
}

void printLL(linkedList l){
    node* temp = l.head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"-->";
        temp = temp->right;
    }
    // cout<<temp->data<<" ";
}

int main(){
    node* root = build();
    linkedList l = convertToLinkedList(root);
    printLL(l);
    return 0;
}