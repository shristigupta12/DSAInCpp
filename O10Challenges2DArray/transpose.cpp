#include<iostream>

using namespace std;

void printArray(int arr[][100], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }  
}

void transpose(int arr[][100], int n){
    for (int i = 0; i < n-1; i++){
        for(int j=i+1; j<n; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
    printArray(arr, n); 
}

int main() {
    int n;
    cin>>n;
    int arr[n][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }       
    }
    transpose(arr, n);
    return 0;
}