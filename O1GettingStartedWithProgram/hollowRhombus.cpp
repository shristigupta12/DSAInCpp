#include<iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        if(i==0 || i==n-1){
            for(int k=0; k<n; k++){
                cout<<"*";
            }
        }else{
            cout<<"*";
            for(int l=0; l<n-2; l++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}