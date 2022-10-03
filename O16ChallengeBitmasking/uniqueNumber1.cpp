#include<iostream>

using namespace std;

long long int uniqueNum(long long int arr[], int n){
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans^=arr[i];
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    long long int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<uniqueNum(arr, n);
    return 0;
}