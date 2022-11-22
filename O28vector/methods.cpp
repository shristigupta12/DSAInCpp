#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> d){
    for(int x: d){
        cout<<x<<", ";
    }
    cout<<endl;
}

int main(){
    vector<int> d{1, 2, 3, 10, 14};
    d.push_back(15);
    d.pop_back();

    d.insert(d.begin()+1,2,100);
    print(d);
    d.erase(d.begin()+2,d.begin()+6);
    print(d);
    
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;  //this remains same
    print(d);

    // d.clear();
    if (d.empty())
    {
        cout<<"This is an empty vector"<<endl;
    }

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    //To avoid doubling, we'll use reverse function
    d.reserve(1000);
    
    return 0;
}