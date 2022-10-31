// Given n strings where numbers are seperated by spaces. You are given a key(which is a token to which part of the string we need to compare for sorting), bool reversal(to check whether we need to reverse our answer or not), string numeric or lexicographic order for sorting

#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

string extractStringAtKey(string s, int k){
    char *ptr = strtok((char *)s.c_str()," ");
    while(k>1){
        ptr = strtok(NULL," ");
        k--;
    }
    return (string)ptr;
}

int convertToInt(string s){
    const char *c = s.c_str();
    int num = 0;
    for (int i = 0; c[i]!='\0'; i++)
    {
        num = num*10 + (c[i]-'0');
    }
    return num;
}

bool numericComparater(pair<string, string> s1, pair<string, string> s2 ){
    return convertToInt(s1.second) < convertToInt(s2.second);
}
bool lexicoComparater(pair<string, string> s1, pair<string, string> s2 ){
    return s1.second < s2.second;
}



int main(){
    int n;
    cin>>n;
    cin.get();
    string st[100];
    for (int i = 0; i < n; i++)
    {
        getline(cin,st[i]);
    }
    int key;
    cin>>key;
    string order, reversal;
    cin>>reversal>>order;

    //Extracting the key number
    pair<string, string> strPair[100];
    for (int i = 0; i < n; i++)
    {
        strPair[i].first = st[i];
        strPair[i].second = extractStringAtKey(st[i],key);
    }
    
    //sorting
    if (order=="numeric")
    {
        sort(strPair, strPair+n, numericComparater);
    }
    if (order=="lexicographic")
    {
        sort(strPair, strPair+n, lexicoComparater);
    }

    //reversal
    if(reversal=="true"){
        for (int i = 0; i < n/2; i++)
        {
            swap(strPair[i], strPair[n-1-i]);
        }      
    }

    //print
    for (int i = 0; i < n; i++)
    {
        cout<<strPair[i].first<<endl;
    }
    
    return 0;
}