#include<iostream>

using namespace std;

int main() {
    int num;
    cin>>num;
    int reverse = 0;
    while(num>=1){
        reverse*=10;
        reverse+= num%10;
        num/=10;
    }
    cout<<reverse;
    return 0;
}