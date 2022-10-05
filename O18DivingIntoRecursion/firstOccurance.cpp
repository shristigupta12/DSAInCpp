#include<iostream>

using namespace std;

int firstOccurance(int *a, int k, int i, int n){
    if(*a==k){
        return i;
    }
    if(i==n-1){
        return -1;
    }        
    return firstOccurance(a+1, k, i+1, n);
}

int firstOccur(int *a, int key, int n){
    if (n==0)
    {
        return -1;
    }
    if (a[0]==key)
    {
        return 0;
    }
    int i = firstOccur(a+1, key, n-1);
    if (i==-1)
    {
        return -1;
    }
    return i+1;
}

int main(){
    int n, k;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>k;
    cout<<firstOccurance(arr, k, 0, n)<<endl;
    cout<<firstOccur(arr, k,n);
    return 0;
}