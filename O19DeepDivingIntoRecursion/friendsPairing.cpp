// n Friends want to go to party. They can go by motorbikes either alone or in pairs. Tell the number of ways in which they can go to the party. 
#include<iostream>

using namespace std;

int ways(int n){
    if (n==0 || n==1)
    {
        return 1;
    }
    return ways(n-1) + (n-1)*ways(n-2);
    // IN case of OR we add, in case of AND we multiply.
}

int main() {
    int n;
    cin>>n;
    cout<<ways(n);
    return 0;
}