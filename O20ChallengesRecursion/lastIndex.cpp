#include<iostream>

using namespace std;

int lastOccurance(int *a,int m, int i){
    
    if (i==-1)
    {
        return -1;
    }
    
    if (a[i]==m)
    {
        return i;
    }
    return lastOccurance(a, m,i-1 );
    
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
    cout<<lastOccurance(arr,m,n-1);
    return 0;
}