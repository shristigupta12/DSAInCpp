// Doubt : How to do this one with recursion
#include<iostream>   

using namespace std;

void inverse(int arr[],int n){
    int array[n];
    for(int i=0; i<n; i++){
        array[arr[i]]=i;
    }
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    inverse(arr, n);
    return 0;
}