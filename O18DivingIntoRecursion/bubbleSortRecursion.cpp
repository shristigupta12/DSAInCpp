#include<iostream>

using namespace std;

void bubbleSort1(int arr[], int n){
    for (int i = n-1; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }           
        }       
    }   
}

void bubbleSortRec(int *a, int n){
    if (n==1)
    {
        return;
    }
    for (int j = 0; j < n-1; j++)
    {
        if (a[j]>a[j+1])
        {
            swap(a[j], a[j+1]);
        }    
    }
    bubbleSortRec(a, n-1);
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    bubbleSortRec(arr, n);
    // bubbleSort1(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }    
    return 0;
}