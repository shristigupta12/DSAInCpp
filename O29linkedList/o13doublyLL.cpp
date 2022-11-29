#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* prev;
    node* next;
    node(int data){
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

istream& operator>>(istream &in, node* &head){
    int d;
    if (head==NULL)
    {
        cin>>d;
        if (d!=-1)
        {
            head = new node(d);
        }else{
            return in;
        }     
    }
    cin>>d;
    node* temp = head;
    while(d!=-1){
        node* n = new node(d);
        temp->next = n;
        n->prev = temp;

        temp = temp->next;
        cin>>d;
    }
    temp->next=NULL;
    return in;
}

ostream& operator<<(ostream &os, node* head){
    if (head==NULL)
    {
        return os;
    }
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
    return os;
}

int main(){
    node* head = NULL;
    cin>>head;
    cout<<head;
    return 0;
}