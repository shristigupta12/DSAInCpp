#include<iostream>

using namespace std;

int main() {
    int n1, n2;
    cin>>n1>>n2;
    int i = 2;
    int lcm = 1;
    while(n1!=1 || n2!=1){
        if(n1%i==0 || n2%i==0){
            while(n1%i==0 || n2%i==0){
                lcm*=i;
                if(n1%i==0){
                    n1/=i;
                }
                if(n2%i==0){
                    n2/=i;
                }
            }
        }
        i++;
    }
    cout<<lcm;
    return 0;
}