#include<iostream>
#include<deque>
using namespace std;

int main(){
    int n, k;
    int arr[1000];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>k;
    deque<int> deq;
    //Finding biggest element of first window in the front and smaller elements of that same window
    for (int i = 0; i < k; i++)
    {
        while (!deq.empty() && arr[deq.back()]<=arr[i])
        {
            deq.pop_back();
        }
        deq.push_back(i);  
    }

    for (int i = k; i < n; i++)
    {
    // then the largest element at the front will be left and subsequent smaller elements than that
        cout<<arr[deq.front()]<<" ";

    // here in every iteration we will remove the elements other than the existing window : pop_front()
        while(!deq.empty() && deq.front()<= i-k){
            deq.pop_front();
        }

    // then remove the elements at the back which are smaller than the current element : pop_back()
        while(!deq.empty() && arr[deq.back()]<=arr[i]){
            deq.pop_back();
        }
        
        deq.push_back(i);
    }
    cout<<arr[deq.front()]<<" ";
    
    return 0;
}