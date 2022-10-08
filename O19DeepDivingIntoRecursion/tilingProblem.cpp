// Given a wall of size 4*n, tell the ways to arrange bricks of size (1*4) or (4*1).
#include<iostream>

using namespace std;

int ways(int n){
    if (n<=3 && n>=0)
    {
        return 1;
    }
    if (n<0)
    {
        return 0;
    }
    
    return ways(n-1) + ways(n-4);
}

int main() {
    int n;
    cin>>n;
    cout<<ways(n);
    return 0;
}