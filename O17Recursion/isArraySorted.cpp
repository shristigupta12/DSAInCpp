#include<iostream>

using namespace std;

bool isSorted(int *a, int n){
    if(n==0 || n==1){
        return true;
    }
    if(isSorted(a+1,n-1) && a[0]<a[1]){
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
    if(isSorted(arr,n)){
        cout<<"Sorted!"<<endl;
    }else{
        cout<<"Not sorted!"<<endl;
    }
    return 0;
}