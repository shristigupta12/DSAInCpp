#include<iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    int tabCount = n/2;
    while(i<=n/2+1){
        for(int j=0; j<tabCount; j++){
            cout<<"    ";
        }
        for(int j=0; j<(2*i)-1; j++){
            cout<<"*   ";
        }
        tabCount--;
        cout<<endl;
        i++;
    }
    i--;
    tabCount++;
    while(i>=1){
        tabCount++;
        i--;
        for(int j=0; j<tabCount; j++){
            cout<<"    ";
        }
        for(int j=0; j<(2*i)-1; j++){
            cout<<"*   ";
        }
        cout<<endl;
    }
    return 0;
}