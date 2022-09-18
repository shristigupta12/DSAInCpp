#include<iostream>
#include<cmath>

using namespace std;

void clearBits(int &n, int i, int j){
    int mask = (~0);
    mask<<=j;
    int num = pow(2, i-1)-1; //or
    // num = (1<<i)-1  this is better
    mask= (mask|num);
    n = (n&mask);
}

void updateBits(int &n, int i, int j, int m){
    m<<=i-1;
    clearBits(n, i, j);
    n = (n|m);
}

int main() {
    int n, i, j, m;
    cin>>n>>i>>j>>m;
    updateBits(n, i, j, m);
    cout<<n;
    return 0;
}