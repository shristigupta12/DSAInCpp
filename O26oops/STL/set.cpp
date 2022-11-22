#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(4);
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(2);
    for (auto x:s)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    // go to cplusplus.com for more fuctions and information

    //iterators are like pointers
    for (set<int> :: iterator it = s.begin(); it!=s.end(); it++)
    {
        cout<<(*it)<<endl;
    }
    
    s.clear();
    s.size();
    return 0;
}