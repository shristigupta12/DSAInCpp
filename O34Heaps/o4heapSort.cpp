#include<iostream>
using namespace std;

class heap{
public:
    int arr[100];
    int size = 0;
    heap(){
        arr[0] = -1;
    }
    void insert(int val){
        size+=1;
        arr[size] = val;
        int ind = size;
        while(ind>1){
            int parent = size/2;
            if (arr[ind]>arr[parent])
            {
                swap(arr[ind], arr[parent]);
                ind = parent;
            }else{
                break;
            }  
        }
    }
    void print(){
        for (int i = 1; i <= size; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
void heapify(int arr[], int size, int i){
    int left = 2*i;
    int right = 2*i+1;
    int largest = i;
    if (left<=size and arr[left]>arr[largest])
    {
        largest = left;
    }
    if (right<=size and arr[right]>arr[largest])
    {
        largest = right;
    }
    if (largest!=i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, size, largest);
    }
}
void heapSort(int arr[], int size){
    int n = size;
    while(n>1){
        swap(arr[1], arr[n]);
        n--;
        heapify(arr,n,1);
    }
}

int main(){
    int arr[6] = {-1, 59, 60, 54, 73, 57};
    int n = 5;
    for (int i = n/2; i >=1; i--)
    {
        heapify(arr, n, i);
    }
    
    heapSort(arr,n);
    for (int i = 1; i <= 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}