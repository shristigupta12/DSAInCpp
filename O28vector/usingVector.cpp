//we is at origin and we are given x,y coordinates of different cars. we need to sort them acc to minimum distance from us
#include<iostream>
#include<vector>
#include <bits/stdc++.h> 
using namespace std;

bool comp(pair<int,int> a, pair<int,int> b){
    int d1 = a.first*a.first + a.second*a.second;
    int d2 = b.first*b.first + b.second*b.second;
    if(d1==d2){
        return a.first<b.first;
    }
    return d1<d2;
}

int main(){
    int n;
    cin>>n;
    vector<pair<int ,int>> v;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end(),comp);
    for (int i = 0; i < n; i++)
    {
        cout<<"Car "<<v[i].first<<" "<<v[i].second<<endl;
    }
    
    return 0;
}