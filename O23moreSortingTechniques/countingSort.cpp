#include<iostream>
using namespace std;

void countSort(int *arr, int n){
    int largest = -1;
    //assuming that array contains only positive integers
    for (int i = 0; i < n; i++)
    {
        largest = max(largest, arr[i]);
    }
    
    int *freq = new int[largest+1]{0};
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    int ind = 0;
    for (int i = 0; i < largest+1; i++)
    {
        while(freq[i]>0){
            arr[ind]=i;
            ind++;
            freq[i]--;
        }      
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }   
}

int main(){
    int arr[] = {88, 97, 10, 12, 15, 1, 5, 6, 12, 5, 8};
    int n = sizeof(arr)/sizeof(int);
    countSort(arr, n);
    return 0;
}