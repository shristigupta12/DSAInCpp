#include<iostream>

using namespace std;

int main() {
    int a, b, xr, max = INT_MIN;
    cin>>a>>b;
    for (int i = a; i < b; i++){
        for (int j = i+1; j <= b; j++){
            xr = (i^j);
            if(xr>max){
                max=xr;
            }
        }
    }
    cout<<max<<endl;
    
    return 0;
}