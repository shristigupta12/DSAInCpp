#include<iostream>
#include<list>
using namespace std;

class queue{
    int cs;
    list<int> l;
public:
    queue(){
        cs=0;
    }
    bool isEmpty(){
        return cs==0;
    }
    void push(int data){
        l.push_back(data);
        cs = cs+1;
    }
    void pop(){
        if (!isEmpty())
        {
            cs--;
            l.pop_front();
        }   
    }
    int front(){
        return l.front();
    }
};

int main(){
    queue q;
    for (int i = 0; i <  10; i++)
    {
        q.push(i+1);
    }
    while (!q.isEmpty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
    
    return 0;
}