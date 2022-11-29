#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> s, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

void pushAtBottom(stack<int> &s, int n){
    if (s.empty())
    {
        s.push(n);
        return;
    }
    int e = s.top();
    s.pop();
    pushAtBottom(s, n);
    s.push(e);
}

void reverseStack(stack<int> &s){
    if (s.empty())
    {
        return;
    }
    int x = s.top();
    s.pop();
    reverseStack(s);
    pushAtBottom(s,x);
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    print(s, s.size());
    reverseStack(s);
    print(s,s.size());

    return 0;
}