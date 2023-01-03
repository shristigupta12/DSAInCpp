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

int main(){
    heap h;
    h.insert(34);
    h.insert(30);
    h.insert(40);
    h.insert(42);
    h.insert(37);
    h.print();
    h.deleteFromBegin();
    h.print();
    
    return 0;
}