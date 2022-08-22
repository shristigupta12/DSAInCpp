#include<iostream>

using namespace std;

int factSum(int n){
    int num = n;
    int facSum = 0;
    for(int i=2; i<=n/2; i++){
        if(num%i==0){
            while(num%i==0){
                num/=i;
                int a = i;
                while(a>0){
                    facSum += a%10;
                    a/=10;
                }
            }
        }
        if(num==1){
            break;
        }
    }
    return facSum;
}

int isBoston(int n){
    int nSum = 0;
    int num = n;
    while(num>0){
        nSum+=num%10;
        num/=10;
    }
    if(factSum(n)==nSum){
        return 1;
    }
    return 0;
}

int main() {
    int n;
    cin>>n;
    cout<<isBoston(n);
    return 0;
}