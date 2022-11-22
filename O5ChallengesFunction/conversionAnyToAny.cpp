//Take sb (source number system base), db (destination number system base) and sn (number in source format). Write a function that converts sn to its counterpart in destination number system. Print the value returned.
#include<iostream>
#include<cmath>
using namespace std;

int sourceToDecimal(int n, int sb){
    int sum = 0;
    int multi = 1;
    while(n>0){
        sum+= (n%10)*multi;
        multi*=sb;
        n/=10;
    }
    return sum;
}

int decimalToDestination(int n, int db){
    int sum = 0;
    int multi = 1;
    while(n>0){
        int rem = n%db;
        sum+=rem*multi;
        multi*=10;
        n/=db;
    }
    return sum;
}

int main() {
    int sb, db, sn;
    cin>>sb>>db>>sn;
    int dec = sn;
    if(sb!=10){
        dec = sourceToDecimal(dec, sb);
    }
    cout<<decimalToDestination(dec, db)<<endl;
    return 0;
}