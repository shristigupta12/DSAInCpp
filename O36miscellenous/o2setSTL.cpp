#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    int num;
    cin>>num;
    //s.find() returns an iterator pointing to the element passed in argument. Else pointing to end of set if not present.
    // set use iterators to traverse
    if(s.find(num)==s.end()){
        cout<<num<<" is not present in set"<<endl;
    }else{
        cout<<num<<" is present in set"<<endl;
    }
    return 0;
}