#include<iostream>

using namespace std;

int trailingZeroes(int n){
    int ans = 0;
    for (int d= 5; d <= n ; d*=5)
    {
        ans+=n/d;
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    cout<<trailingZeroes(n);
    return 0;
}