// Using bitwise Operator find a unique number out of 2*n+1 numbers. n: these numbers occur twice
#include<iostream>

using namespace std;

int main() {
    int N; 
    cin>>N;
    int sum = 0;
    for(int i=0; i<N; i++){
        int num;
        cin>>num;
        sum^=num;
    }
    cout<<endl<<sum;
    return 0;
}