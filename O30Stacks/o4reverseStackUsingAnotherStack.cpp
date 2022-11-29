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

void transfer(stack<int> &s1, stack<int> &s2, int e){
    for (int j = 0; j < e; j++)
        {
            int t = s1.top();
            s2.push(t);
            s1.pop();
        }
}

void reverseStack(stack<int> &s1){
    stack<int> s2;
    int n = s1.size();
    for (int i = 0; i < n; i++)
    {
        int x = s1.top();
        s1.pop();

        transfer(s1,s2,n-i-1);

        s1.push(x);

        transfer(s2,s1,n-i-1);
    }
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    print(s, s.size());

    reverseStack(s);
    print(s, s.size());

    return 0;
}