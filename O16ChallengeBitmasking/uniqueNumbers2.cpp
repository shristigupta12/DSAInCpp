#include<iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n], xr = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        xr^=arr[i];
    }
    int digit = 0;
    while(xr>0){
        if((xr&1)==1){
            break;
        }
        digit++;
        xr>>=1;
    }
    int set1=0, set2=0;
    for (int i = 0; i < n; i++)
    {
        if((arr[i]&(1<<digit))==0){
            set1^=arr[i];
        }else{
            set2^=arr[i];
        }
    }
    cout<<set1<<" "<<set2;
    return 0;
}