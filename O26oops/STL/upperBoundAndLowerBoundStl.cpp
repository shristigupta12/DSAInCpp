#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 2, 2, 2, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    auto first = lower_bound(arr, arr+n, 2);
    auto last = upper_bound(arr, arr+n,2);
    cout<<first-arr<<endl;
    cout<<last-arr-1<<endl;
    return 0;
}