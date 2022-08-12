/*Take the following as input.

A number (N1)
A number (N2)
Write a function which prints first N1 terms of the series 3n + 2 which are not multiples of N2.*/

#include<iostream>

using namespace std;

int main() {
    int n1, n2;
    int n = 1;
    int count = 1;
    cin>>n1>>n2;
    while(count<=n1){
        int out =  3*(n) + 2;
        if(out%n2!=0){
            cout<<out<<endl;
            count++;
        }
        n++;
    }
    return 0;
}