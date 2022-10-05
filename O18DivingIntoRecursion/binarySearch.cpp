#include<iostream>

using namespace std;

int recursionBsearch(int s, int k, int e,int arr[] ){
    if (s>e)
    {
        return -1;
    }
    int mid = (s+e)/2;
    if (arr[mid]==k)
    {
        return mid;
    }
    if (arr[mid]>k)
    {
        return recursionBsearch(s, k, mid-1, arr);
    }
    return recursionBsearch(mid+1, k, e, arr);
}

int simpleBsearch(int arr[], int n, int k){
    int start = 0, mid,end = n-1;
    while (start<=end)
    {
        mid = (start+end)/2;
        if (arr[mid]==k)
        {
            return mid;
        }
        if (arr[mid]>k)
        {
            end = mid-1;
        }else{
            start = mid+1;
        }      
    }
    return -1;
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
    cout<<simpleBsearch(arr, n, k)<<endl;
    cout<<recursionBsearch(0, k, n-1, arr);
    return 0;
}