#include<iostream>
#include<cstring>

using namespace std;

int main() {
    int n;
    cin>>n;
    // IF LSB = 1, Odd and If LSB = 0, Even
    // n&1=LSB
    if((n&1)==0){
        cout<<"even"<<endl;
    }else{
        cout<<"odd"<<endl;
    }

    // Or
    string result = (n&1) == 0 ? "even" : "odd";  //this is used in case there is a return 
    cout<<result<<endl;
    return 0;
}