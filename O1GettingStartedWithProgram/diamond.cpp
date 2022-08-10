#include<iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int count= n;
    for (int i = 0; i < n; i++){
        for(int j=0; j<(2*n)-1; j++){
            if(i==0){
                cout<<"*";
            }else{
                if(j<count || j>=count+(2*i)-1){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
        }
        count--;
        cout<<endl;
    }
    count++;
    for(int i=n-2; i>=0; i--){
        count++;
        for(int j=0; j<(2*n)-1; j++){
            if(i==0){
                cout<<"*";
            }else{
                if(j<count || j>=count+(2*i)-1){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
        
}
