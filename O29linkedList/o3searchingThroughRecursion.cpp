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

int length(node*head){
    int count = 0;
    while(head!=NULL){
        count++;
        head = head->next;
    }
    return count;
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

void insertInMiddle(node*&head,int data, int p){
    if (head==NULL or p==0)
    {
        insertAtHead(head,data);
        return;
    }   
    if(p>length(head)){
        insertAtEnd(head,data);
        return;
    }
    node *n = new node(data);
    node *tail = head;
    p--;
    while(p!=0){
        tail = tail->next;
        p--;
    }
    n->next = tail->next;
    tail->next = n; 
}

void print(node*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<endl;
}

void deleteNode(node*&head, int data){
    if (head==NULL)
    {
        return;
    }
    
    if (head->data == data)
    {
        node *temp = head->next;
        delete head;
        head = temp;
        return;
    }
    node *temp = head;
    node*previous = temp;
    while(temp->data!=data && temp!=NULL){
        if (temp->next==NULL)
        {
            return;
        }       
        previous = temp;
        temp = temp->next;
    }
    previous->next = temp->next;
    delete temp;
}

bool search(node*head, int data){
    if (head==NULL)
    {
        return false;
    }
    if (head->data == data)
    {
        return true;
    }
    return search(head->next,data);
}

int main(){
    node*head = NULL; 
    insertAtHead(head,3);
    insertAtHead(head,1);
    insertAtEnd(head,5);
    insertInMiddle(head,2,1);
    insertInMiddle(head,4,3);
    print(head);
    deleteNode(head, 7);
    print(head);
    int d;
    cin>>d;
    if (search(head,d))
    {
        cout<<"Present"<<endl;
    }else{
        cout<<"Not present"<<endl;
    }
    return 0;
}