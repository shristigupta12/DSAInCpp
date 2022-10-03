#include<iostream>

using namespace std;

void decimalToBinary(int n){
    int mask = (1<<30);
    int bit = 0,ans = 0,power = 1 ;
    bool oneFound = false;
    while(mask!=0){
        if((mask&n)==0 && oneFound==false){
            mask>>=1;       
        }else{
            oneFound = true;
            if((mask&n)!=0){
                cout<<1;
            }else{
                cout<<0;
            }
            mask>>=1;       
        }
    }
    
}

int main() {
    int n;
    cin>>n;
    decimalToBinary(n);
    return 0;
}