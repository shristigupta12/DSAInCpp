/* push(), pop(), top(), getMin(), getMax( ) */
#include<iostream>
#include<vector>
using namespace std;

class MinMaxStack{
    vector<int> stack;
    vector<int> minStack;
    vector<int> maxStack;

public:
    void push(int data){

        int currentmin = data;
        int currentmax = data;

        if (stack.size()!=0)
        {
            currentmin = min(minStack[minStack.size()-1],data);
            currentmax = max(maxStack[maxStack.size()-1],data);
        }
        
        stack.push_back(data);
        minStack.push_back(currentmin);
        maxStack.push_back(currentmax);
    }

    void pop(){
        if (stack.size()!=0)
        {
            stack.pop_back();
            minStack.pop_back();
            maxStack.pop_back();
        }  
    }

    int top(){
        return stack[stack.size()-1];
    }

    int getmin(){
        return minStack[minStack.size()-1];
    }

    int getmax(){
        return maxStack[maxStack.size()-1];
    }

    bool empty(){
        return stack.size()==0;
    }
};

int main(){
    MinMaxStack s;
    s.push(1);
    s.push(5);
    s.push(3);
    s.push(8);

    for (int i = 0; i < 4; i++)
    {
        cout<<"Top : "<<s.top()<<endl;
        cout<<"Min : "<<s.getmin()<<endl;
        cout<<"Max : "<<s.getmax()<<endl;
        s.pop();
        cout<<endl;
    }
    
    return 0;
}