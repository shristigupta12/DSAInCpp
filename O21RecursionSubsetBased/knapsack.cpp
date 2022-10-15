// Robbery with the maximum profit. 
// Ex : capacity : 6kg
//      bag : 1kg 20rs
// football : 2kg 50rs
//      bat : 3kg 60rs
//   racket : 5kg 100rs
// ans : 130 (20+50+60)
#include<iostream>
#include <limits.h>

using namespace std;

int maxPrice(int* wt, int*price, int n, int cap ){
    if (cap==0 || n==0)
    {
        return 0;
    }
    
    int inc = INT_MIN, exc = INT_MIN;
    if (cap>=wt[n-1])
    {
        inc = price[n-1] + maxPrice(wt, price, n-1, cap-wt[n-1]);
    }
    exc = 0+maxPrice(wt, price, n-1, cap);
    return max(inc, exc);
}

int main(){
    int itemNum, cap;
    cin>>itemNum;
    int wt[itemNum];
    int price[itemNum];
    for (int i = 0; i < itemNum; i++)
    {
        cin>>wt[i];
    }
    for (int i = 0; i < itemNum; i++)
    {
        cin>>price[i];
    }
    cin>>cap;
    cout<<maxPrice(wt, price, itemNum, cap);
    return 0;
}