#include<iostream>

using namespace std;

void subArrayGenerator(int arr[], int n){
    int max = INT_MIN;
    int count,start;
    for (int i = 0; i < n; i++)
    {
        for(int j=0; j<=n-i; j++){
            int sum = 0;
            for(int k = j; k<=j+i; k++){
                if(j+i>=n){
                    continue;
                }
                sum+=arr[k];
            }
            if(max<sum){
                max = sum;
                count = i;
                start = j;
            }
        }
        cout<<endl;
    }  
    for(int a=start; a<=start+count; a++){
        cout<<arr[a];
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