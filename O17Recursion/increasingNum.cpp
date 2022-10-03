#include<iostream>

using namespace std;

void increasingNum(int n){
    if(n==0){
        return;
    }else{
        increasingNum(n-1);
        cout<<n<<" ";
    }
}

void printInc(int n,int i){
    if(i==n+1){
        return;
    }
    cout<<i<<" ";
    printInc(n,i+1);
}

int main() {
    int n;
    cin>>n;
    increasingNum(n);
    cout<<endl;
    //or
    printInc(n,1);
    return 0;
}