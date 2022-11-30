#include<iostream>
using namespace std;
//push(), pop(), front(), rear()

class queue{
public:
    int data;
    queue* next;
    queue* prev;
    queue(int d){
        data = d;
        next = NULL;
        prev = NULL;
    }
};
queue* tail = NULL;

void push(queue* &head, int data){
    if (head==NULL)
    {
        head = new queue(data);
        tail = head;
        return;
    }
    queue* n = new queue(data);
    n->next = head;
    head->prev = n;
    head = n;
}

void pop(queue* &head){
    if (head!=NULL)
    {
        queue* temp = tail->prev;
        temp->next = NULL;
        delete tail;
        tail = temp;
    } 
}

void print(queue* head){
    queue* temp = tail;
    while(temp!=head){
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
    cout<<temp->data<<" ";
    cout<<endl;
}

int main(){
    queue* head = NULL;
    push(head, 1);
    push(head, 2);
    push(head, 3);
    push(head, 4);
    pop(head);
    print(head);
    return 0;
}