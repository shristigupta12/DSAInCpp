#include<iostream>
#include<cstring>
#include<algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin>>n;
    int s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    cin>>m;
    // int *a = lower_bound(s, s+n, m);
    // if(a==s+n){
    //     cout<<-1;
    // }else{
    //     cout<<a-s;
    // }
    sort(s, s+n);
    int *a = find(s, s+n, m);
    if(a==s+n){
        cout<<-1;
    }else{
        cout<<a-s;
    }
    
    return 0;
}