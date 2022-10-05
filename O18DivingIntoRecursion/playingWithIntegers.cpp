#include<iostream>
#include<cstring>

using namespace std;

string digits[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void printDigits(int n){
    if (n==0)
    {
        return;
    }
    printDigits(n/10);
    cout<<digits[n%10]<<" ";
}

int main() {
    int n;
    cin>>n;
    printDigits(n);
    return 0;
}