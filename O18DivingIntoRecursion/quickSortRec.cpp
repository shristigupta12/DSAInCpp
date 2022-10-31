#include<iostream>
#include<bits/stdc++.h>

using namespace std;



void quickSort(int *a, int s, int p){
    if (s>=p)
    {
        return;
    }  

    int s2=s-1;
    for (int i = s; i <= p; i++)
    {
        if (a[i]<=a[p])
        {
            s2++;
            swap(a[i], a[s2]);
        }       
    }
    quickSort(a, s, s2-1);
    quickSort(a, s2, p);
    
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    quickSort(arr,0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
