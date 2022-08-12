#include<iostream>
#include<cmath>

using namespace std;

int toDecimal(int num){
    int power = 0;
    int decimal = 0;
    while(num>=1){
        decimal+= (num%2)*pow(2,power);
        num/=10;
        power++;
    }
    return decimal;
}

int main() {
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin>>num;
        cout<<toDecimal(num)<<endl;
    }
    
    return 0;
}