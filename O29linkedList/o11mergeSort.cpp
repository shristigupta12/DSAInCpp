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

node* midPoint(node* head){
    if (head==NULL or head->next==NULL)
    {
        return head;
    }
    node*fast = head->next;
    node*slow = head;
    while(fast->next!=NULL and fast!=NULL){
        fast = fast->next->next;
        if (fast==NULL)
        {
            break;
        }
        slow = slow->next;
    }
    return slow;
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

node* mergeSort(node* head){
    if (head==NULL or head->next==NULL)
    {
        return head;
    }
    
    node* mid = midPoint(head);
    node* a = head;
    node* b = mid->next;
    mid->next = NULL;

    a = mergeSort(a);
    b = mergeSort(b);
    node* c = mergeRec(a,b);
    return c;
}

int main(){ 
    node*head;
    cin>>head;
    head = mergeSort(head);
    cout<<head;
    return 0;
}