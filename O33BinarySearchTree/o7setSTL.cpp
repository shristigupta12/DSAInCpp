#include<iostream>
#include<set>
using namespace std;

void print(set<int> s){
    for (set<int>:: iterator it = s.begin(); it!=s.end();it++)
    {
        cout<<*(it)<<" ";
    }
}

// set is ordered and stores unique elements
int main(){
    int arr[] = {10, 20, 11, 8, 9, 11, 10};
    int n = sizeof(arr)/sizeof(int);

    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    print(s);
    s.erase(10);
    auto it = s.find(11);
    s.erase(it);   
    print(s);

    return 0;
}