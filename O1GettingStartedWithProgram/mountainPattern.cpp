#include<iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int tab=(2*(n-1))-1;
    for(int i=1; i<=n; i++){
        int j=1;
        while(j<=i){
            cout<<j<<"  ";
            j++;
        }
        for(int k=0; k<tab; k++){
            cout<<"   ";
        }
        tab=tab-2;
        j--;
        if(j==n){
            j--;
        }
        while(j>=1){
            cout<<j<<"  ";
            j--;
        }
        cout<<endl;
    }
    return 0;
}