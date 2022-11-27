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

node* returnEnd(node* head){
    if (head==NULL)
    {
        return head;
    }
    node *tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    return tail;
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

bool detectCycle(node* head){
    node* slow = head;
    node* fast = head;
    while (fast!=NULL && fast!=NULL)
    {
        if (fast==slow)
        {
            return true;
        }       
    }
    return false;
} 

node* removeCycle(node *head){
    // through floyd's algorithm of x=z
    if (head==NULL or head->next==NULL)
    {
        return head;
    }
    node* fast = head;
    node* slow = head;
    node* temp;
    do
    {
        slow = slow->next;
        temp = fast;
        temp = temp->next;
        fast = fast->next->next;
    } while (fast!=slow);
    slow = head;
    while(slow->next!=fast->next){
        slow = slow->next;
        temp = fast;
        fast = fast->next;
    }
    temp->next = NULL;
    return head;
}

int main(){ 
    node*head;
    cin>>head;
    node* end = returnEnd(head);
    end->next = head;
    head = removeCycle(head);
    cout<<head;
    return 0;
}