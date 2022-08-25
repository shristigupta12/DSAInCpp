#include<iostream>       // time limit exceeded

using namespace std;

int subArrays(int arr[], int n){
    int sum = 0, maxSum = INT_MIN;
    for(int i=0; i<n; i++){
        for(int j = i; j<n; j++){
            sum = 0;
            for(int k=i; k<=j; k++){
                // cout<<arr[k]<<" ";
                sum+=arr[k];
            }
            if(sum>maxSum){
                maxSum = sum;
            }
            // cout<<endl;
        }
        if(i!=0){
            for(int b = 0; b<=i-1; b++){
                sum = 0;
                for(int k=i; k<=n-1; k++){
                    // cout<<arr[k]<<" ";
                    sum+=arr[k];
                }
                for(int k = 0; k<=b; k++ ){
                    // cout<<arr[k]<<" ";
                    sum+=arr[k];
                }
                if(sum>maxSum){
                    maxSum = sum;
                }
                // cout<<endl;
            }
        }
    }
    return maxSum;
}


int main() {
    int t, n;
    cin>>t;
    for(int a = 0; a<t; a++){
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        cout<<subArrays(arr, n);
    }
    return 0;
}