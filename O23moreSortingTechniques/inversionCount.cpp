#include<iostream>
using namespace std;

int merge(int *arr,int s,int e, int mid){
    int k = s, i = s, j = mid+1, count = 0;
    int temp[100000];
    while(i<=mid && j<=e){
        if (arr[i]<arr[j])
        {
            temp[k++]=arr[i++];
        }else{
            temp[k++]=arr[j++];
            count+= mid-i+1;
        }       
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=e){
        temp[k++]=arr[j++];
    }
    for (int i = s; i <= e; i++)
    {
        arr[i]=temp[i];
    }
    return count;
}

int inversion(int *arr, int s, int e){
    //base case
    if (s>=e)
    {
        return 0;
    }

    //recursive case
    int mid = (s+e)/2;
    int x = inversion(arr, s, mid);
    int y = inversion(arr, mid+1, e);
    int z = merge(arr, s, e, mid);
    return x+y+z;
}

int main(){
    int arr[] = {1, 5, 2, 6, 3, 0};
    int n = sizeof(arr)/sizeof(int);
    cout<<inversion(arr, 0, n-1);
    return 0;
}