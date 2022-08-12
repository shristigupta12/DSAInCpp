#include<iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int oddSum=0;
    int evenSum=0;
    int count = 1;
    while(n>=1){
        if(count%2==0){
            evenSum+=n%10;
        }else{
            oddSum+=n%10;
        }
        count++;
        n/=10;
    }
    cout<<oddSum<<endl<<evenSum;
    return 0;
}