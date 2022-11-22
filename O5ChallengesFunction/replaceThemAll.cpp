#include<iostream>

using namespace std;

int replacedNum(long long int n){
    long long int newNum=0;
    long long int multi = 1;
    long long int num = n;
    int digit;
    while(num>0){
        digit = num%10;
        if(num%10==0){
            digit = 5;
        }
        newNum = newNum + digit*multi;
        multi*=10;
        num/=10;
    }
    return newNum;
}

int main() {
    long long int n;
    cin>>n;
    cout<<replacedNum(n);
    return 0;
}