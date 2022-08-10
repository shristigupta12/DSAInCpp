#include<iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int tab = n-1;
    for(int i=1; i<=n; i++){
        for(int j =0; j<tab; j++){
            cout<<"  ";
        }
        tab--;
        if(i==1){
            cout<<i<<endl;
        }else{
            cout<<i<<" ";
            int middle = i;
            for(int j=1; j<=2*(i-1)-1; j++){
                if(j>i-1){
                    middle--;
                }else{
                    middle++;
                }
                cout<<middle<<" ";
            }
            cout<<i<<endl;
        }
    }
    return 0;
}