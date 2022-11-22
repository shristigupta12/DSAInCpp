#include<iostream>
#include<vector>
using namespace std;

int main(){

    // Different ways to declare and initialize vector
    vector<int> a;
    vector<int> b(5,0); // Five number of elements of value 0
    vector<int> c(b.begin(),b.end());
    vector<int> d{1,2,3,4,5}; 

    // iterate over vector
    for (int i = 0; i < d.size(); i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<endl;
    for (auto it = b.begin(); it!=b.end(); it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
    for (int x :d)
    {
        cout<<x<<" ";
    }

    //more functions
    

    return 0;
}