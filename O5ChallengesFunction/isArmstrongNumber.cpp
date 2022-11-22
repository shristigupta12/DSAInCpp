#include<iostream>
#include<cmath>
using namespace std;

void isArmstrong(long long int n);

int main() {
    long long int n;
    cin>>n;
    isArmstrong(n);
    return 0;
}
int digitCount(long long int n);
void isArmstrong(long long int n){
    int digits = digitCount(n);
    int sum = 0;
    int num = n;
    while(num>0){
        sum+= pow((num%10),digits);
        num/=10;
    }
    if(sum==n){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
}
int digitCount(long long int n){
    int count=0;
    while(n>0){
        n/=10;
        count++;
    }
    return count;
}