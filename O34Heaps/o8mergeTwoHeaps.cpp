// merge two binary max heaps : on geeksforgeeks
#include<iostream>
using namespace std;

// class Solution{
//     public:
//     void heapify(vector<int> &arr, int size, int i){
//         int largest = i;
//         int left = 2*i+1;
//         int right = 2*i+2;
//         if (left<size && arr[largest]<arr[left])
//         {
//             largest = left;
//         }
//         if (right<size && arr[largest]<arr[right])
//         {
//             largest = right;
//         }
//         if (largest!=i)
//         {
//             swap(arr[largest], arr[i]);
//             heapify(arr, size, largest);
//         }
// }
//     vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
//         // your code here
//         vector<int> arr;
//         for(auto i: a){
//             arr.push_back(i);
//         }
//         for(auto i: b){
//             arr.push_back(i);
//         }
        
//         int s = arr.size();
//         for(int i=s/2-1; i>=0; i--){
//             heapify(arr, s, i);
//         }
//         return arr;
//     }
// };

int main(){
    
    return 0;
}