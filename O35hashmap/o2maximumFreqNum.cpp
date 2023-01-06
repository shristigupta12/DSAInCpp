#include<iostream>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    unordered_map<int, int> cnt;
    int maxFreq = 0;
    int maxAns = 0;
    for (int i = 0; i < n; i++)
    {
        cnt[arr[i]]++;
        maxFreq = max(maxFreq, cnt[arr[i]]);
    }

    for (int i = 0; i < n; i++)
    {
        if(maxFreq == cnt[arr[i]]){
            maxAns = arr[i];
            break;
        }
    }
    cout<<maxAns<<endl;
    return 0;
}