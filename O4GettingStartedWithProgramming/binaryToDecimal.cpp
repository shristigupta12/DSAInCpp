#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin>>n;
    int decimal = 0;
    int count = 0;
    while(n>=1){
        if(n%10==1){
            decimal+= pow(2, count);
        }
        n/=10;
        count++;
    }
    cout<<decimal;
    return 0;
}