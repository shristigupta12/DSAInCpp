#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string st = "Hello!";
    const char *c = st.c_str();
    for (int i = 0; c[i]!=0; i++)
    {
        cout<<c[i]<<endl;
    } 
    return 0;
}