// Enter a number in input which contains all numbers from 1 to n for an n digit number
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int num;
    cin>>num;
    int n = num;
    int inverse = 0;
    int i = 1;
    while(n>=1){
        int power = (n%10)-1;
        inverse+= i*(pow(10, power));
        i++;
        n/=10;
    }
    cout<<inverse;

    return 0;
}