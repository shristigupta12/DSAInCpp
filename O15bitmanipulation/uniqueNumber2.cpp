#include<iostream>

using namespace std;



void uniqueNum(int arr[], int n){
    int bitCheck = 0;
    for (int i = 0; i < n; i++){
        bitCheck^=arr[i];
    }
    int count = 0;
    int mask = 1;
    while((bitCheck&mask)==0){
        mask<<=1;
        count++;
    }
    int set1=0, set2=0;
    mask<<=count;
    for (int i = 0; i < n; i++){
        if((arr[i]&mask)==0){
            set1^=arr[i];
        }else{
            set2^=arr[i];
        }
    }
    cout<<"The two unique numbers are "<<set1<<" and "<<set2<<endl;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    uniqueNum(arr, n);
    return 0;
}