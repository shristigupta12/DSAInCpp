// Alex goes shopping
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void answer(int arr[], int n, int a, int k){
    int num = 0;
    int counter = 0;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==a){
            num++;
        }
        else if(arr[i]<a){
            break;   
        }
        else{
            break;
        }
    }
    
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int q; 
    sort(arr, arr+n);
    for (int i = 0; i < q; i++)
    {
        int A, k;
        cin>>A>>k;

    }
    
    return 0;
}