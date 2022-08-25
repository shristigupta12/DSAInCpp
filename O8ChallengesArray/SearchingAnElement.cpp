#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int bSearch(int arr[], int n, int m){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==m){
            return mid;
        }
        else if(arr[mid]<m){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return -1;
}

int main() {
    int n, m;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>m;
    sort(arr, arr+n);
    cout<<bSearch(arr, n, m);
    return 0;
}