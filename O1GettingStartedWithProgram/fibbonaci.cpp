#include<iostream>

using namespace std;

int fib(int num){
    if(num<=2 ){
        return num-1;
    }
    return fib(num-1)+fib(num-2);
}

int main() {
    int n;
    cin>>n;
    int count = 1;
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout<<fib(count)<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}