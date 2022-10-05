#include<iostream>

using namespace std;

// My code
int lastOccurance(int *a, int n, int key, int i){
    if (i==n)
    {
        return -1;
    }
    if (*a==key)
    {
        int b = lastOccurance(a+1, n, key, i+1);
        if (b==-1)
        {
            return i;
        }
    }
    return lastOccurance(a+1, n, key, i+1);
}

// Sir code
int lastOccurance2(int *a, int n, int key, int i){
    if (i==n)
    {
        return -1;
    }
    if (*a==key)
    {
        int b = lastOccurance2(a+1, n, key, i+1);
        if (b!=-1)
        {
            return b;
        }else{
            return i;
        }       
    }
    int x = lastOccurance2(a+1, n, key, i+1);
    return x;
    
}

int main() {
    int n, k;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>k;
    cout<<lastOccurance(arr, n, k, 0)<<endl;
    cout<<lastOccurance2(arr, n, k, 0)<<endl;
    return 0;
}