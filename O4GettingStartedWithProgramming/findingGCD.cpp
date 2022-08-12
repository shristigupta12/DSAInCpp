#include<iostream>
#include<cmath>

using namespace std;

int findGcd(int n1,int n2){
    int gcd = 1;
    for(int i=1; i<n2/2; i++){
        int num = n2/i;
        if(n1%num==0){
            gcd = num;
            return gcd;
        }
    }
    return gcd;
}

int main() {
    int n1, n2;
    cin>>n1>>n2;
    if(n1>n2){
        cout<<findGcd(n1,n2);
    }else{
        cout<<findGcd(n2, n1);
    }
    
    return 0;
}