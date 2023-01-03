#include<iostream>
#include<queue>
using namespace std;

int kthSmallestEl(int arr[], int n, int k){
    priority_queue<int> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }
    for (int i = k; i < n; i++)
    {
        if (arr[i]<pq.top())
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    return pq.top();
}

int main(){
    int arr[5] = {7, 10, 4, 20, 15};
    cout<<kthSmallestEl(arr, 5, 4);
    return 0;
}