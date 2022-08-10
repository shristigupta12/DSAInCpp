#include<iostream>

using namespace std;

int main() {
    int size;
    cout<<"Enter the length of the pattern: ";
    cin>>size;
    for(int i=1; i<=size; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}