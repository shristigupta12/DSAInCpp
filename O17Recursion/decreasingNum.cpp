#include<iostream>

using namespace std;

void decNum(int n){
    if(n==1){
        cout<<1;
    }else{
        cout<<n<<" ";
        decNum(n-1);
    }
}

int main() {
    int n;
    cin>>n;
    decNum(n);
    return 0;
}