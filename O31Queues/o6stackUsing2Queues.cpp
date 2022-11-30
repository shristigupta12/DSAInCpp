// Design a class stack using only 2 queues 
#include<iostream>
#include<queue>
using namespace std;

// push(), pop(), top(), empty()

class stack{
    queue<int> q1, q2;
public:
    void push(int data){
            q1.push(data);
    }
    void pop(){
        if (q1.empty())
        {
            return;
        }
        
        while(q1.size()>1){
            int el = q1.front();
            q2.push(el);
            q1.pop();
        }
        q1.pop();
        swap(q1,q2);
    }
    int top(){
        while(q1.size()>1){
            int el = q1.front();
            q2.push(el);
            q1.pop();
        }
        int ans = q1.front();
        q1.pop();
        q2.push(ans);
        swap(q1,q2);
        return ans;
    }
    int size(){
        return q1.size()+q2.size();
    }
    bool empty(){
        return size()==0;
    }
};

int main(){
    stack s;
    cout<<s.empty()<<endl;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.empty()<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}