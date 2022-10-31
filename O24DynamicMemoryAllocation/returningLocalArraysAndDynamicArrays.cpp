#include<iostream>
using namespace std;

// int* func(){
//     int a[] = {1, 2, 3, 4, 5};
//     cout<<a<<endl;
//     cout<<a[0]<<endl;  
//     return a; // the error through this is that we cannot return a local variable since it's scope is lost after the function
// }
int* func1(){
    int *a = new int[2];
    a[0] = 3;
    a[1] = 1;
    cout<<a<<endl;
    cout<<a[0]<<endl;
    return a;
}


int main(){
    // int *b = func(); // After this line, the a array is destroyed(deallocated)
    // cout<<b<<endl;
    // cout<<b[0]<<endl; // Since there because of deallocation, there is nothing as b[0]. So we may get garbage value, segmentation fault or 1

    int *b = func1();
    cout<<b<<endl;
    cout<<b[0]<<endl;
    delete []  b;
    return 0;

}