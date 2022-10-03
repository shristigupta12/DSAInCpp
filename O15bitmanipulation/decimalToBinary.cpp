#include<iostream>

using namespace std;

int binary(int n){
    int b = 0;
    int power = 1;
    while(n>0){
        b += (n%2)*power;
        power*=10;
        n/=2;
    }
    return b;
}
// OR through bits
void binaryUsingBits(int n){
    int ans = 0;
    int p = 1;
    while(n>0){
        ans+= (n&1)*p;
        p*=10;
        n>>=1;
    }
    cout<<ans<<endl;
}

int main() {
    int n;
    cin>>n;
    cout<<binary(n)<<endl;
    binaryUsingBits(n);
    return 0;
}