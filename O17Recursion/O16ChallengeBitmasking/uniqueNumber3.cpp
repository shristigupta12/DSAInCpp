#include<iostream>

using namespace std;
int uniqueNum(int arr[], int n){
    int mask = 1<<30, answer = 0;
    int count = 0;
    while((mask!=0)){
        count=0;
        for (int i = 0; i < n; i++){
            if((mask&arr[i])!=0){
                count++;
            }
        }
        if(count!=0){
            count%=3;
            if(count!=0){
                answer+=mask;
            }
        }
        mask>>=1;
    }
    return answer;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<uniqueNum(arr, n);
    return 0;
}