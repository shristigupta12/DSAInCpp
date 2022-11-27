#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* prev;
    node* next;
    node(int data){
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};

void insertAtEnd(node* &head, int data){
    if (head==NULL)
    {
        head = new node(data);
        head->next = head;
        head->prev = head;
        return;
    }
    node* end = head;
    while(end->next!=head){
        end = end->next;
    }
    node *n = new node(data);
    n->prev = end;
    n->next = end->next;
    end->next = n;
    head->prev = n;
}

void deleteLL(){}

void print(node* head){
    if (head==NULL)
    {
        return;
    }
    node* temp = head;
    do
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    } while (temp->next!=head);
    cout<<endl; 
}

int main(){
    node* head = NULL;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    print(head);
    return 0;
}