#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t, n, price;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int min = INT_MAX;
        int diff=0;
        cin>>n;
        int arr[n];
        int one=0, two=n-1;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        cin>>price;
        sort(arr, arr+n);
        int s=0, e=n-1;
        while(s<e){
            if(arr[s]+arr[e]==price){
                int diff = e-s;
                if(min>diff){
                    one = s;
                    two = e;
                }
                s++;
                e--;
            }
            else if(arr[s]+arr[e]>price){
                e--;
            }
            else{
                s++;
            }
        }
        cout<<"Deepak should buy roses whose prices are "<<arr[one]<<" and "<<arr[two]<<"."<<endl;
        cout<<endl;
    }
    
    return 0;
}