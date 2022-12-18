#include<iostream>
#include<set> // contains both set and multiset
using namespace std;

//multiset - variation of set, can store multiple elements having same values
// all elements are stored in a specific order according to internal comparision object
// once the values are inserted, they cannot be modified
// associative container : key/value reference and not by index
// underlying implementation is a bst

void print(multiset<int> m){
    //iterate
    for (int x:m)
    {
        cout<<x<<", ";
    }
    cout<<endl;
}

typedef multiset<int>::iterator ite;

int main(){
    int arr[] = {10, 20, 30, 20, 10 , 10, 30, 30};
    int n = sizeof(arr)/sizeof(int);
    multiset<int> m{arr, arr+n};

    print(m);

    //erase 20
    m.erase(20);
    print(m);
    
    //insert
    m.insert(80);
    print(m);

    //count
    cout<<"count of 10 : "<<m.count(10)<<endl;

    //find
    auto it = m.find(30);
    cout<<(*it)<<endl;

    //get all elements which are equal to 30
    pair<ite, ite> range = m.equal_range(30);
    for (auto it = range.first; it != range.second; it++)
    {
        cout<<*it<<" - ";
    }
    cout<<endl;

    //lower bound and upper bound
    for (auto it = m.lower_bound(10); it!=m.upper_bound(77); it++)
    {
        cout<<*it<<", ";
    }
    cout<<endl;
    
    return 0;
}