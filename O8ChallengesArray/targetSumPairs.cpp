#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>t;
    int left = 0;
    int right = n-1;
    sort(arr, arr+n);
    while(left<right){
        if(arr[left]+arr[right]==t){
            cout<<arr[left]<<" and "<<arr[right]<<endl;
            left++;
            right--;
        }
        else if(arr[left]+arr[right]<t){
            left++;
        }else{
            right--;
        }
    }
    return 0;
}