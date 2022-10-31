// DNF is used to sort an array of 0s 1s and 2s
#include<iostream>
using namespace std;

void dnfSort(int *arr, int n){
    int low = 0, mid = 0, high=n-1;
    while (mid<=high)
    {
        if (arr[mid]==2)
        {
            swap(arr[high], arr[mid]);
            high--;
        }
        if (arr[mid]==0)
        {
            swap(arr[low], arr[mid]);
            low++;
        }
        mid++;
    }
    
}

int main(){
    int arr[] = {2, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 2, 0};
    int n = sizeof(arr)/sizeof(int);
    dnfSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}