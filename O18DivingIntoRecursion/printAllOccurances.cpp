#include<iostream>

using namespace std;

int ans[100], in = 0;

int* allOccurances(int *a, int key, int n, int i){
    if (n==0)
    {
        return ans;
    }
    if (*a==key)
    {   
        ans[in] = i;
        in++;
    }
    return allOccurances(a+1, key, n-1, i+1);
}

int main() {
    int n, k;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>k;
    int *x = allOccurances(arr, k, n, 0 );
    for (int i = 0; i < in; i++)
    {
        cout<<x[i]<<" ";
    }
    
    return 0;
}