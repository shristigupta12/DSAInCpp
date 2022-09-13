//calculate the sum
#include<iostream>

using namespace std;

int sum(int arr[],int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int ans(int arr[], int n){
    int q, x, ind;
    cin>>q;
    for (int i = 0; i < q; i++){
        cin>>x;
        if(x>n){
            x%=n;
        }
        for(int j=0; j<n; j++){
            if(x>j){
                int a = x;
                a -= j;
                ind = n-a;
            }else{
                ind = j-x;
            }
            cout<<j<<" "<<ind<<endl;
            arr[j]+= arr[ind];
            cout<<arr[j]<<" ";
        }
    } 
    return sum(arr, n);
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<ans(arr, n);
    
    return 0;
}