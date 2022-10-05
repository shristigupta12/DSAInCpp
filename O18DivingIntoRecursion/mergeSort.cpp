#include<iostream>

using namespace std;

void merge(int *a, int *b, int *c, int s, int e){
    int k = s;
    int mid = (s+e)/2;
    int i1=s, i2=mid+1;
    while(i1<=mid && i2<=e){
        if (b[i1]<c[i2])
        {
            a[k++]=b[i1++];
        }else{
            a[k++]=c[i2++];
        }      
    }
    while(i1<=mid){
        a[k++]=b[i1++];
    }
    while(i2<=e){
        a[k++]=c[i2++];
    }
}

void mergeSort(int *a, int s, int e){
    if (s>=e)
    {
        return;
    }
    
    int b[100], c[100];
    int mid = (s+e)/2;

    for (int i = s; i <= mid; i++)
    {
        b[i] = a[i];
    }
    for (int i = mid+1; i <= e; i++)
    {
        c[i] = a[i];
    }
    
    mergeSort(b, s, mid);
    mergeSort(c, mid+1, e);

    merge(a, b, c, s, e);
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    mergeSort(arr, 0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}