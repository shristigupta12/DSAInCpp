#include<iostream>

using namespace std;

void selectionSort(int arr[],int size){
    for(int i=0; i<size-1; i++){
        int min = i;
        for(int j=i+1; j<size;j++ ){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        if(min!=i){
            swap(arr[i], arr[min]);
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
    selectionSort(arr, size);
    cout<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}