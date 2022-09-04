#include<iostream>    // two test cases, wrong answer
#include <bits/stdc++.h> 

using namespace std;

int main() {
    int n,target;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>target;
    
    sort(arr, arr+n);
    int i=0, j=n-1;
    while(i<=n-3){
        if(j==i+1){
            i++;
            j=n-1;
        }
        if(arr[i]+arr[j]>=target){
            j--;
        }else{
            for(int a=i+1; a<=j-1; a++){
                if(arr[i]+arr[j]+arr[a]==target){
                    cout<<arr[i]<<", "<<arr[a]<<" and "<<arr[j]<<endl;
                }else if(arr[i]+arr[j]+arr[a]>target){
                    break;
                }
            }
            j--;           
        }
    }
    
    return 0;
}