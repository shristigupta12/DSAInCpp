#include<iostream>

using namespace std;

void allOccurances(int *a, int key, int n, int i){
    if (n==0)
    {
        return;
    }
    if (*a==key)
    {
        cout<<i<<" ";
    }
    allOccurances(a+1, key, n-1, i+1);
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
    allOccurances(arr, k, n, 0 );
    return 0;
}