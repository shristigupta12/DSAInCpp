#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int num;
    cin>>num;
    int octal=0;
    int power = 0;
    while(num>=1){
        octal += (num%8)*pow(10, power);
        num/=8;
        power++;
    }
    cout<<octal;
    return 0;
}