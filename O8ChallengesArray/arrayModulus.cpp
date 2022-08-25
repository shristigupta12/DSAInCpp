#include<iostream>  // doubt

using namespace std;

int findEl(int i, int x, int arr[], int n){
    int ind = x;
    while(ind>n){
        ind -=n;
    }
    if(ind>i){
        ind-= i;
        return arr[n-ind];
    }
    return arr[i-ind];  
}

int main() {
    int n, q, x, sum=0, el;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];

        sum+=arr[i];
    }
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        cin>>x;
        for(int i=0; i<n; i++){
            el = findEl(i, x, arr, n);
            arr[i] = arr[i]+el;
            sum+=el;
        }
    }
    cout<<sum;
    
    return 0;
}