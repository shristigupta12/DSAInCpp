#include<iostream>
#include<cmath>

using namespace std;

int FinalNum(long long int n){
    int power=0;
    long long int num = n;
    long long int invertedNum = 0;
    while(num>0){
        int digit = num%10;
        if(9-digit<digit){
            digit = 9-digit;
            if(num/10==0){
                if(digit==0){
                    digit = 9-digit;
                }
            }
        }
        if(num==n){
            invertedNum = digit;
        }else{
            invertedNum = digit*(pow(10,power)) + invertedNum;
        }
        num/=10;
        power++;
    }
    return invertedNum;
}

int main() {
    long long int n;
    cin>>n;
    cout<<FinalNum(n);
    return 0;
}