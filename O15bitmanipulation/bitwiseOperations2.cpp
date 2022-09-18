#include<iostream>

using namespace std;

bool checkBit(int &n, int i){
    if((n&(1<<i))==0){
        return false;
    }else{
        return true;
    }
}

int main() {
    int n, i;
    cin>>n>>i;
    if(checkBit(n, i)){
        cout<<"Bit number "<<i<<" is 1"<<endl;
    }else{
        cout<<"Bit number "<<i<<" is 0"<<endl;
    }
    return 0;
}