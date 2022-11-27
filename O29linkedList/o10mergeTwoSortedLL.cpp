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
    cin>>data;
    while(data!=-1){
        insertAtEnd(head,data);
        cin>>data;
    }
    return head;
}

istream& operator>>(istream &is, node*&head){
    head = take_input();
    return is;
}

ostream& operator<<(ostream &os, node*head){
    print(head);
    return os;
}

node* mergeLL(node*head1, node*head2){
    node *head;
    if (head1->data<head2->data)
    {
        head = head1;
        head1 = head1->next;
    }else{
        head = head2;
        head2 = head2->next;
    }
    node *temp = head;
    while(head1!=NULL and head2!=NULL){
        if (head1->data<head2->data)
        {
            temp->next = head1;
            head1 = head1->next;
            temp = temp->next;
        }else{
            temp->next = head2;
            head2 = head2->next;
            temp = temp->next;
        }
    }  
    while (head1!=NULL)
    {
        temp->next = head1;
        head1 = head1->next;
        temp = temp->next;
    }
    while (head2!=NULL)
    {
        temp->next = head2;
        head2 = head2->next;
        temp = temp->next;
    }
    temp->next = NULL;
    return head;    
}

node* mergeRec(node*a, node*b){
    if (a==NULL)
    {
        return b;
    }
    if (b==NULL)
    {
        return a;
    }
    node*head;
    if (a->data<b->data)
    {
        head = a;
        head->next = mergeRec(a->next, b);
    }else{
        head = b;
        head->next = mergeRec(a, b->next);
    }
    return head;
}

int main(){ 
    node*head1, *head2;
    cin>>head1>>head2;
    node *head = mergeRec(head1, head2);
    cout<<head;
    return 0;
}