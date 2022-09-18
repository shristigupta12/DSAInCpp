#include<iostream>
#include<cstring>
#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b){
    return a>b;
}
bool compare1(string a, string b){
    if(a.length()==b.length()){
        return a<b;
    }else{
        return a.length()>b.length();
    }
}

int main() {
    int n;
    cin>>n;
    string s[100];
    cin.get();
    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
    }
    
    //sorting ascending order
    sort(s, s+n);
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<endl;
    }

    //sorting ascending order
    sort(s, s+n, compare);
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<endl;
    }

    //sorting according to length
    sort(s, s+n, compare1);
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<endl;
    }
    
    return 0;
}