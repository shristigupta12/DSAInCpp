#include<iostream>   //wrong answer

using namespace std;

int checkInArr(int el, int arr2[], int n2){
    for(int i=0; i<n2; i++){
        if(el==arr2[i]){
            return i;
        }
    }
    return -1;
}

int maxSumForArr(int arr1[], int arr2[], int n1, int n2){
    int maxSum = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n1; i++){
        if(i!=0){
            int ind = checkInArr(arr1[i],arr2,n2);
            if(ind!=-1){
                sum=0;
                for(int j=0; j<=i; j++){
                    sum+=arr1[j];
                }
                for(int j=ind+1; j<n2; j++){
                    sum+=arr2[j];
                }
            }
        }else{
            for (int k = 0; k < n1; k++)
            {
                sum+=arr1[k];
            }          
        }
        if(sum>maxSum){
            maxSum=sum;
        }
    } 
    return maxSum;
}

void maxSumPath(int arr1[], int arr2[], int n1, int n2){
    // For arr1
    int arr1max = maxSumForArr(arr1,arr2,n1,n2);
    int arr2max = maxSumForArr(arr2,arr1,n2,n1);
    if(arr1max>arr2max){
        cout<<arr1max;
    }else{
        cout<<arr2max;
    }

}

int main() {
    int t, n1, n2;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n1>>n2;
        int arr1[n1], arr2[n2];
        for (int j = 0; j < n1; j++)
        {
            cin>>arr1[j];
        }
        for (int j = 0; j < n2; j++)
        {
            cin>>arr2[j];
        }
        maxSumPath(arr1, arr2,n1,  n2);
    }
    return 0;
}