#include<iostream>
#include <bits/stdc++.h>

using namespace std;

// bool checkBit(int &n, int num){
//     if((n&(1<<num))==0){
//         return false;
//     }
//     return true;
// }

// int countSetBits(int &n){
//     int count = 0, num = 0;
//     int i = log2(n);
//     while(num<=i){
//         if(checkBit(n,num)){
//             count++;
//         }
//         num++;
//     }
//     return count;
// }

// EASY WAY
int countSetBits2(int n){
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
    int n;
    cin>>n;
    // cout<<countSetBits(n);
    cout<<countSetBits2(n)<<endl;
    return 0;
}