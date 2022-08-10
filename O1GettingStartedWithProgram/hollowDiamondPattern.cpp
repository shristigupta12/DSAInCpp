#include<iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1; 
    int gapIndex = n/2+1;
    while(i<=n/2+1){
        if(i==1){
            for(int j=0; j<n; j++){
                cout<<"*    ";
            }  
            cout<<endl;         
        }else{
            for(int j=1; j<=n; j++){
                if(j<gapIndex || j>=gapIndex+((2*(i-1))-1)){
                    cout<<"*    ";
                }else{
                    cout<<"     ";
                }
            }
            cout<<endl;
            gapIndex--;
        }
        i++;
    }
    i--;
    gapIndex++;
    while(i>1){
        i--;
        if(i==1){
            for(int j=0; j<n; j++){
                cout<<"*    ";
            }
            cout<<endl;            
        }else{
            gapIndex++;
            for(int j=1; j<=n; j++){
                if(j<gapIndex || j>=gapIndex+((2*(i-1))-1)){
                    cout<<"*    ";
                }else{
                    cout<<"     ";
                }
            }
            cout<<endl; 
        }
    }
    return 0;
}