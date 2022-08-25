#include<iostream>

using namespace std;

int cummulativeSum(int arr[], int index);

void maxSum(int arr[], int size){
    int maxSum = INT_MIN;
    int sum = 0;
    int start;
    int end;
    for (int i = 1; i <= size-1; i++)
    {
        for(int j=i; j<=size-1; j++){
            if(j!=i){
                sum = cummulativeSum(arr, j) - cummulativeSum(arr, i);
            }
            else{
                sum = cummulativeSum(arr, j);
            }
            if(sum>maxSum){
                maxSum = sum;
                start = i;
                end = j;
            }
        }
    }
    cout<<maxSum<<endl;
    for(int i = start+1; i<=end; i++){
        cout<<arr[i]<<" ";
    }
    
}

int cummulativeSum(int arr[], int index){
    int sum = 0;
    for(int i=0; i<=index; i++){
        sum+=arr[i];
    }
    return sum;
}

int main() {
    int n;
    cin>>n;
    int size = n+1;
    int arr[size];
    arr[0] = 0;
    for(int i =1; i<=size-1; i++){
        cin>>arr[i];
    }
    maxSum(arr, size);
    return 0;
}