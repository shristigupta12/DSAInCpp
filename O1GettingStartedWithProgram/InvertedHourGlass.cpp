#include<iostream>

using namespace std;

void values(int n, int tab,int i){
    int val = n;
    while(val>=n+1-i){
        cout<<val<<"    ";
        val--;
    }
    for (int j = 0; j < tab; j++){
        cout<<"     ";
    }
    if(i==n+1){
        val++;
    }
    while(val<n){
        val++;
        cout<<val<<"    ";
    }
}

int main() {
    int n;
    cin>>n;
    int i=1; 
    int tab = 2*(n+1-i)-1;
    while(i<=n+1){
        values(n, tab, i);
        cout<<endl;
        tab-=2;
        i++;
    }
    i--;
    tab+=2;
    while(i>1){
        i--;
        tab+=2;
        values(n, tab, i);
        cout<<endl;
    }
    return 0;
}