#include<iostream>
using namespace std;

int main(){
    //Dynamic
    // dealocated by user
    int *ptr = new int[1000];

    //Static 
    //allocated and dealocated by compiler
    int a[1000];

    //Sizes
    cout<<sizeof(a)<<endl;
    cout<<sizeof(ptr)<<endl;

    //Deallocation
    delete [] ptr;

    //Initializing with 0
    int a[100] = {0};
    ptr = new int[100]{0};
    return 0;
}