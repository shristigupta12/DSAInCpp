#include<iostream>

using namespace std;

int findUniqueNum(int arr[], int n){
    int mask = 1<<30;
    int count = 30;
    int sum = 0;
    int num = 0;
    while(mask!=0){
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            if((mask&arr[i])!=0){
                sum++;
            }
        }
        if(sum!=0){
            sum%=3;
            if(sum==1){
                num+=mask;
            }
        }
        mask>>=1;
        count--;
    }  
    return num;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<findUniqueNum(arr, n)<<endl;

    return 0;
}