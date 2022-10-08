#include<iostream>

using namespace std;

int countSetBit(int n){
    int count = 0;
    while(n>0){
        if((n&1)==1){
            count++;
        }
        n>>=1;
    }
    return count;
}

int main() {
    int t, n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        cout<<countSetBit(n)<<endl;
    }   
    return 0;
}