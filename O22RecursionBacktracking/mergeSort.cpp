//Merge sort without using storing in a different arrays
#include<iostream>
using namespace std;

void merge(int *arr, int s, int e, int mid){
    int i=s, j=mid+1, ind=s;
    int temp[100];
    while (i<=mid && j<=e )
    {
        if(arr[i]<arr[j]){
            temp[ind++]=arr[i++];
        }else{
            temp[ind++]=arr[j++];
        }
    }
    while (i<=mid)
    {
        temp[ind++]=arr[i++];
    }
    while(j<=e){
        temp[ind++]=arr[j++];
    }     
    for (int i = s; i <= e; i++)
    {
        arr[i] = temp[i];
    }
    
}

void mergeSort(int *arr, int s, int e){
    if (s>=e)
    {
        return;
    }
    

    int mid = (s+e)/2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);
    merge(arr, s, e, mid);
}

int main(){
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