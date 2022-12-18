#include<iostream>
#include<set>
using namespace std;


// I have doubt in this code
class personCompare{
    public:
    bool operator()(pair<string,int> p1, pair<string, int> p2){
        return p1.second<p2.second;
    }
};

int main(){
    pair<string, int> p1 = make_pair("B", 100);
    pair<string, int> p2 = make_pair("A", 40);
    pair<string, int> p3 = make_pair("C", 120);
    pair<string, int> p4 = make_pair("D", 10);

    personCompare pe;
    multiset<pair<string, int>, personCompare> m;
    m.insert(p1);
    m.insert(p2);
    m.insert(p3);
    m.insert(p4);

    for (auto p : m)
    {
        cout<<p.first<<" - "<<p.second<<endl;
    }
    
    return 0;
}