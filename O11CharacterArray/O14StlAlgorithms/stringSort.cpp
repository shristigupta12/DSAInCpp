#include<iostream>
#include<cstring>
// #include<algorithm>
#include <bits/stdc++.h> 
using namespace std;

bool compare(string s1, string s2){
    if(s1.compare(s2)==0){
        return s1.length()>s2.length();
    }else{
        return s1<s2;
    }
}


int main() {
    int n;
    cin>>n;
    string s[100];
    cin.get();
    for (int i = 0; i < n; i++)
    {
        getline(cin,s[i]);
    }
    sort(s, s+n, compare);
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}