#include<iostream>

using namespace std;



int main() {
    int n;
    cin>>n;
    cout<<1<<endl;
    for(int i=2; i<=n; i++){
        cout<<i<<"  ";
        if(i>=3){
            for(int j=1; j<=i-2; j++){
                cout<<0<<"  ";
            }
        }
        cout<<i<<endl;
    }
    return 0;
}