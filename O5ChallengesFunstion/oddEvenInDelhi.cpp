#include<iostream>

using namespace std;

void oddEven(int n){
    int even=0;
    int odd=0;
    while(n>0){
        int digit = n%10;
        if(digit%2==0){
            even+=digit;
        }else{
            odd+=digit;
        }
        n/=10;
    }
    if(even%4==0 || odd%3==0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}

int main() {
    int num;
    cin>>num;
    int n;
    for(int i=0; i<num; i++){
        cin>>n;
        oddEven(n);
    }
    return 0;
}