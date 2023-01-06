#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> m;
    //insertion
    m.insert(make_pair("babbar",3));
    m.insert(make_pair("love",2));
    m["mera"] = 1;
    m["mera"] = 2;

    //searching
    cout<<"mera : "<<m["mera"]<<endl;
    cout<<"babbar : "<<m.at("babbar")<<endl;
    // cout<<m.at("unknown key")<<endl;
    cout<<"unknown key : "<<m["unknown key"]<<endl;
    cout<<"unknown key : "<<m.at("unknown key")<<endl;
    cout<<"love : "<<m.count("love")<<endl;

    // erase
    cout<<"size : "<<m.size()<<endl;
    m.erase("love");
    cout<<"size : "<<m.size()<<endl;

    //traversal
    cout<<"Traversing : "<<endl;
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    //iterator
    cout<<"Traversing through iterator: "<<endl;
    unordered_map<string, int> :: iterator it = m.begin();
    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    return 0;
}