#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1 = {1, 2, 5, 6};
    vector<int> v2 = {3, 4};
    vector<int> :: iterator it = v1.begin();
    advance(it, 2); // function
    copy(v2.begin(), v2.end(), inserter(v1,it)); //function
    cout<<"v1"<<": ";
    for(auto i:v1){
        cout<<i<<" ";
    }
    cout<<endl<<"v2"<<": ";
    for(auto i:v2){
        cout<<i<<" ";
    }
    return 0;
}