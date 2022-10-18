#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int n, m;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>m;
    int *a = find(arr, arr+n, m);
    if(a==arr+n){
        cout<<-1;
    }else{
        cout<<a-arr<<endl;
    }
    return 0;
}