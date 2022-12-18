#include<iostream>
#include<set>
using namespace std;

void print(set<pair<int, int>> s){
    for (auto p:s)
    {
        cout<<p.first<<" and "<<p.second<<endl;
    }
}

int main(){
    set<pair<int, int>> s;
    s.insert(make_pair(10,1));
    s.insert(make_pair(20,2));
    s.insert(make_pair(30,3));
    s.insert(make_pair(40,4));

    s.erase(s.find(make_pair(40, 4)));

    auto it = s.lower_bound(make_pair(20,2));
    cout<<it->first<<endl;
    it = s.upper_bound(make_pair(20,2));
    cout<<it->first<<endl;
    return 0;
}