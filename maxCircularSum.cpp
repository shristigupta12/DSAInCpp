#include<iostream>
#include<climits>

using namespace std;

int circularSubArrays(int arr[],int n){
    int sum=0;
    int maxSum = INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=i; k<=j; k++){
                // cout<<arr[k]<<" ";
                sum+=arr[k];
            }
            if (sum>maxSum)
            {
                maxSum = sum;
            }           
            sum = 0;
            // cout<<endl;
        }
        if(i!=0){
            for (int m = 0; m < i; m++){
                for(int x=i; x<n; x++){
                    // cout<<arr[x]<<" ";
                    sum+=arr[x];
                }
                for(int o=0; o<=m; o++){
                    // cout<<arr[o]<<" ";
                    sum+=arr[o];
                }
                if (sum>maxSum)
                {
                    maxSum = sum;
                }           
                sum = 0;
                // cout<<endl;
            }         
        }
    }
    return maxSum;
}

int main() {
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int b=0; b<n; b++){
            cin>>arr[b];
        }
        cout<<circularSubArrays(arr, n);
    }  
    return 0;
}