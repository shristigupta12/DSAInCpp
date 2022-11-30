#include<iostream>
#include<stack>
using namespace std;


template<typename T>
class queue{
    stack<T> s1, s2;
public:
    void push(int data){
        s1.push(data);
    }
    void pop(){
        if (s1.empty())
        {
            return;
        }
        while(s1.size()>1){
            s2.push(s1.top());
            s1.pop();
        }
        s1.pop();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    bool empty(){
        return s1.empty();
    }

    int front(){
        while(s1.size()>1){
            s2.push(s1.top());
            s1.pop();
        }
        T ans = s1.top();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return ans;
    }
};

int main(){
    queue<int> q;
    if (q.empty())
    {
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"Queue is not empty"<<endl;
    }
    q.push(1);
    q.push(2);
    q.push(3);
    if (q.empty())
    {
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"Queue is not empty"<<endl;
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}