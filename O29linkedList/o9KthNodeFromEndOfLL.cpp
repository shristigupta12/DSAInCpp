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

node* kthNodefromTheEnd(node *head, int k){
    if (head==NULL)
    {
        return head;
    }
    node *temp = head;
    int i=1;
    node* ans = head;
    while (i!=k and temp->next!=NULL )
    {
        temp = temp->next;
        i++;
    }
    if (temp->next==NULL )
    {
        if (i==k)
        {
            return ans;
        }    
        return head;  
    }
    while (temp->next!=NULL)
    {
        temp = temp->next;
        ans = ans->next;
    }
    return ans;  
}

int main(){ 
    node*head;
    cin>>head;
    node *ans = kthNodefromTheEnd(head, 2);
    cout<<ans->data;
    return 0;
}