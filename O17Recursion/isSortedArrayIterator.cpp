#include<iostream>

using namespace std;

bool isSorted(int arr[], int n, int i){
    if (i==n-1){
        return true;
    }
    if(arr[i]<arr[i+1] && isSorted(arr, n, i+1)){
        return true;
    }else{
        return false;
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    if (isSorted(arr, n, 0))
    {
        cout<<"Sorted"<<endl;
    }else{
        cout<<"Not sorted"<<endl;
    }
    
    return 0;
}