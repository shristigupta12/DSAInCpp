#include<iostream>

using namespace std;

void bubbleSort(int arr[], int size){
    for(int n = size-1; n>0; n--){
        for(int i=0; i<n ; i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }
}

int main() {
    int size;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    bubbleSort(arr, size);
    cout<<"Sorted array: "<<endl<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}