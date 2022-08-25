#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int testcase(int arr[], int n, int k, int price){
    int num = 0;
    int total = 0;
    sort(arr, arr+n);
    for(int i=0; i<=n-1; i++){
        int total = arr[i];
        if(total==price){
            num++;
        }
        while(total<price){
            
        }
    }       
    return n;
}

int main() {
    int n, q, price, k;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int q;
    int price[q], k[q];
    for (int i = 0; i < q; i++)
    {
        cin>>price>>k;
        if(testcase(arr,n, k,price)==k){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    
    return 0;
}