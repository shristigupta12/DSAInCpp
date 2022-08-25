#include<iostream>

using namespace std;

void subArrayGenerator(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        for(int j=0; j<=n-i; j++){
            int sum = 0;
            for(int k = j; k<=j+i; k++){
                if(j+i>=n){
                    continue;
                }
                cout<<arr[k];
            }
            cout<<" ";
        }
        cout<<endl;
    }  
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    subArrayGenerator(arr, n);
    return 0;
}