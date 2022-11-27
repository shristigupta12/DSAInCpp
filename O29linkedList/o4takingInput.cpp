//TO make this code run, add <inp.txt in the terminal when running the code
#include<iostream>
using namespace std;

class node{
public:
    int data;
    node*next;
    node(int d){
        data = d;
        next = NULL;
    }
};

void insertAtHead(node*&head,int data){
    if (head==NULL)
    {
        head = new node(data);
        return;
    }
    node *n = new node(data);
    n->next = head;
    head = n;
}

void insertAtEnd(node*&head, int data){
    if (head==NULL)
    {
        insertAtHead(head, data);
        return;
    }
    node *tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    tail->next = new node(data);
    return;
}

void print(node*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<endl;
}

node* take_input(){
    int data;
    node*head = NULL;
    while(cin>>data){
        insertAtEnd(head,data);
    }
    return head;
}

int main(){
    node *head = take_input();
    print(head);
    return 0;
}