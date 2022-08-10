#include<iostream>

using namespace std;

void printNum(int i){
    if(i==0){
            cout<<1<<endl;
        }else{
            cout<<i+1<<"    ";
            int mid = i+2;
            for(int j=1; j<=(2*i)-1; j++){
                cout<<mid<<"    ";
                if(j>=i){
                    mid--;
                }else{
                    mid++;
                }
            }
            cout<<i+1<<endl;
        }
}

int main() {
    int n;
    cin>>n;
    int tabCount = n-1;
    int i;
    for (i = 0; i < n; i++)
    {
        for(int j=0; j<tabCount; j++){
            cout<<"     ";
        }
        tabCount--;
        printNum(i);
    }
    i--;
    tabCount++;
    while(i>0){
        i--;
        tabCount++;
        for(int j=0; j<tabCount; j++){
            cout<<"     ";
        }
        printNum(i);
    }
    return 0;
}