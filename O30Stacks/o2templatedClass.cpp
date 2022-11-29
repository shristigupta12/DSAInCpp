#include<iostream>
#include<vector>
using namespace std;

template<typename T1, typename T2>
class stack{
    vector<T1> v;
    vector<T2> u;
public:
    void push(T1 data){
        v.push_back(data);
    } 
    bool isEmpty(){
        return v.size()==0;
    }   
    void pop(){
        if (!isEmpty())
        {
            v.pop_back();
        }
    }
    T1 top(){
        if (!isEmpty())
        {
            return v[v.size()-1];
        }
    }
};

int main(){
    stack<char, int> s;
    for (int i = 65; i < 71; i++)
    {
        s.push(i);
    }
    while (!s.isEmpty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}