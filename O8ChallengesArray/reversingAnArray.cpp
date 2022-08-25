#include<iostream>

using namespace std;

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void arrayReversal(int arr[], int n){
    if(n%2==0){
        for(int i=0; i<=(n-1)/2; i++){
            swap(arr[i],arr[n-1-i]);
        }
    }else{
        for(int i=0; i<(n-1)/2; i++){
            swap(arr[i], arr[n-1-i]);
        }
    }
    printArr(arr, n);
}


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    arrayReversal(arr, n);
    return 0;
}