//complex version of car problem from video usingVector
#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

class car{
    public:
    string name;
    int x,y;
    car(string n, int a, int b){
        name = n;
        x = a;
        y = b;
    }
    int distance(){
        return (x*x)+(y*y);
    }
};

bool comp(car a, car b){
    int d1 = a.distance();
    int d2 = b.distance();
    return d1<d2;
}


int main(){
    vector<car> v;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int x,y;
        cin>>name>>x>>y;
        car c(name,x,y);
        v.push_back(c);
    }
    sort(v.begin(),v.end(),comp);
    for (auto i:v)
    {
        cout<<i.name<<", distance "<<sqrt(i.distance())<<", position ("<<i.x<<","<<i.y<<")"<<endl;
    }
    
    return 0;
}