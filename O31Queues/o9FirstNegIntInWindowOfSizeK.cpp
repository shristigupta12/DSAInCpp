#include<iostream>
#include<queue>
using namespace std;

int main(){
    int n, k;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>k;
    queue<int> q;
    for (int i = 0; i < k; i++)
    {
        if (arr[i]<0)
        {
            q.push(i);
        }
    }
    cout<<arr[q.front()]<<" ";
    for (int i = k; i < n; i++)
    {
        while (!q.empty() and q.front()<=i-k)
        {
            q.pop();
        }
        if (arr[i]<0)
        {
            q.push(i);
        }
        cout<<arr[q.front()]<<" ";  
    }
    
    return 0;
}