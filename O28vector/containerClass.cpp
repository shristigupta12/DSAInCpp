#include<iostream>
#include"vector.h"   //***
using namespace std;

int main(){
    Vector<char> v;
    v.push_back(71);
    v.push_back(72);
    v.push_back(74);
    v.pop_back();
    v.push_back(75);
    cout<<"capacity = "<<v.capacity()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}