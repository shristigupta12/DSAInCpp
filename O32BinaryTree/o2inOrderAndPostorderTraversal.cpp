#include<iostream>
using namespace std;
/*Traversals: 
   Preorder = root->left->right
   Inorder = left->root->right
   Postorder = left->right->root
*/

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
    int data;
    cin>>data;
    if (data==-1)
    {
        return NULL;
    }
    node* root = new node(data);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void preorderPrint(node* root){
    if (root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorderPrint(root->left);
    preorderPrint(root->right);
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
void postorderPrint(node* root){
    if (root==NULL)
    {
        return;
    }
    postorderPrint(root->left);
    postorderPrint(root->right);
    cout<<root->data<<" ";
}

int main(){
    node* root = buildTree();

    cout<<"Pre-order traversal: ";
    preorderPrint(root);
    cout<<endl;

    cout<<"In-order traversal: ";
    inorderPrint(root);
    cout<<endl;

    cout<<"Post-order traversal: ";
    postorderPrint(root);
    cout<<endl;

    return 0;
}