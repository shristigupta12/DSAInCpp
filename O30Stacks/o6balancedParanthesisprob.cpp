#include<iostream>
#include<stack>
using namespace std;

bool balParanthesis(char *s){
    stack<char> stk;
    for (int i = 0; s[i]!='\0'; i++)
    {
        if (s[i]=='(')
        {
            stk.push(s[i]);
        }
        if (s[i]==')')
        {
            if (!stk.empty())
            {
                stk.pop();
            }else{
                return false;
            }          
        }  
    }
    return stk.empty();  
}

int main(){
    char s[100 ] = "((a+b)+(c-d+f))";
    if (balParanthesis(s))
    {
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    
    
    return 0;
}