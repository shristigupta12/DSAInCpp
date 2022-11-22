#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

bool lexicoComp(pair<string,int> p1,pair<string,int> p2){
    return p1.first<p2.first;
}

bool priceComp(pair<string, int> p1, pair<string,int> p2){
    return p1.second<p2.second;
}

void print(vector<pair<string,int>>v){
    for (auto a:v)
    {
        cout<<a.first<<" : "<<a.second<<endl;
    }
}

int main(){
    vector<pair<string,int>> v;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        int p;
        cin>>p;
        pair<string, int> myPair(s,p);
        v.push_back(myPair);
    }
    
    print(v);
    cout<<endl;
    sort(v.begin(),v.end(),lexicoComp);
    print(v);
    cout<<endl;
    sort(v.begin(),v.end(),priceComp);
    print(v);
    cout<<endl;
    
    //difference b/w p1.first and p1->first
    //p1.first : p1 is object
    //p1->first : p1 is pointer and it can also be written as (*p1).first
    
    return 0;
}