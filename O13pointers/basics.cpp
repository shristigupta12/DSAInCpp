#include<iostream>

using namespace std;

int main() {
    int a = 1300;
    int *ptr = &a;
    cout<<ptr<<endl; 
    cout<<*ptr<<endl; 
    cout<<&ptr<<endl; 
    cout<<&a<<endl; 
    //or
    int *aptr;
    aptr = &a;
    cout<<ptr<<endl;

    cout<<sizeof(ptr)<<endl; 
    cout<<sizeof(aptr)<<endl; 
    return 0;
}