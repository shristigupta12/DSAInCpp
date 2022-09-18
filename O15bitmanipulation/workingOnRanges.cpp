#include<iostream>
#include<cmath>

using namespace std;

// clearEnd first i bits
int clearBits1(int n){
    int i, mask = (~0);
    cin>>i;
    mask<<=i;
    return (n&mask);
}

// clear bits in range
int clearBits2(int n){
    int i, j, mask = (~0);
    cin>>i>>j;
    // i is excluded
    mask<<=j;
    int m2 = pow(2, i)-1;
    mask = (mask|m2);
    return (n&mask);
}

int main() {
    int n;
    cin>>n;
    cout<<clearBits1(n)<<endl;
    cout<<clearBits2(n)<<endl;
    return 0;
}