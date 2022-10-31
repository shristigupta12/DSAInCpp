#include<iostream>
using namespace std;

void waveSort(int *arr, int n){
    int i=0;
    while(i<n){ 
        if (i>0 && arr[i]<arr[i-1]){
            swap(arr[i], arr[i-1]);
        }
        if (i<n-1 && arr[i]<arr[i+1]){
            swap(arr[i], arr[i+1]);
        } 
        i+=2;       
    }
}

int main(){
    int arr[] = {1, 3, 4, 2, 7, 8};
    int n = sizeof(arr)/sizeof(int);
    waveSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}