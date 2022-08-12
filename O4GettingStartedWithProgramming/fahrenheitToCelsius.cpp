#include<iostream>

using namespace std;

int fahToCel(int f){
    return (5*(f-32))/9;
}

int main() {
    int min, max, step;
    cin>>min>>max>>step;
    int val = min;
    while(val<max){
        cout<<val<<"    "<<fahToCel(val)<<endl;
        val+=step;
    }
    cout<<val<<"    "<<fahToCel(val)<<endl;
    return 0;
}