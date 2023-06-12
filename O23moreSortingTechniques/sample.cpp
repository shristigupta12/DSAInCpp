#include<bits/stdc++.h>
using namespace std;

void quickSort(int *arr, int s, int e){
    if(s>=e) return;
    int pivot = (s+e)/2;
    for(int i=s; i<pivot; i++){
        if(arr[i]>arr[pivot]) swap(arr[i], arr[pivot]);
    }
    for(int i=pivot+1; i<=e; i++){
        if(arr[i]<arr[pivot]) swap(arr[i], arr[pivot]);
    }
    quickSort(arr, s, pivot);
    quickSort(arr, pivot+1, e);
}

int main(){
    int arr[] = {50, 20, 30, 10, 40};
    int len = sizeof(arr)/sizeof(int);
    quickSort(arr, 0, len-1);
    for(auto i:arr) cout<<i<<" ";
    return 0;
}