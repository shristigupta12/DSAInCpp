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
            arr[size]=val;
            int index = size;
            while(index>1){
                int parent = index/2;
                if (arr[parent]<arr[index])
                {
                    swap(arr[parent],arr[index]);
                    index = parent; 
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
        void deleteFromBegin(){
            arr[1]=arr[size];
            size--;
            int ind = 1;
            while(ind<size){
                int leftIn = 2*ind;
                int rightIn = 2*ind+1;
                if (leftIn < size and arr[ind]<arr[leftIn])
                {
                    swap(arr[ind],arr[leftIn]);
                    ind = leftIn;
                }
                else if(rightIn < size and arr[ind]<arr[rightIn]){
                    swap(arr[ind],arr[rightIn]);
                    ind = rightIn;
                }
                else{
                    break;
                }
            }
        }
};

void heapify(int arr[], int size, int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;
    if (left<size and arr[largest]<arr[left])
    {
        largest = left;
    }
    if (right<size and arr[largest]<arr[right])
    {
        largest = right;
    }
    if (largest!=i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, size, largest);
    }
    
}

int main(){
    heap h;
    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    for (int i = n/2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
    for (int i = 1; i <= n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}