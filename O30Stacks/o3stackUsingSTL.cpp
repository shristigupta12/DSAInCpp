#include<iostream>
#include<stack>
using namespace std;

//4 important methods : push(), pop(), top(), empty()

int main(){
    stack<int> s;
    for (int i = 0; i < 5; i++)
    {
        s.push(i);
    }
    while(!s.empty()){
        cout<<s.top()<<" ,";
        s.pop();
    }
    return 0;
}