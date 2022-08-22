#include<iostream>

using namespace std;

void insertionSort(int arr[], int size){
    for(int i=1; i<size; i++){
        int min = i;
        while(min>0){
            if(arr[min]<arr[min-1]){
                swap(arr[min], arr[min-1]);
            }else{
                break;
            }
            min--;
        }
    }
}

int main() {
    int size; 
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    insertionSort(arr, size);
    cout<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}