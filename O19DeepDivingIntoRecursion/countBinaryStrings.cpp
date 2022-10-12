// return string with n digits in binary form which does not contain any consecutive ones.
#include<iostream>

using namespace std;

int num = 0;
int p = 1;
int count(int n,int digit){
    if (n==1)
    {
        if (digit==0)
        {
            return 2;
        }else{
            return 1;
        }        
    }
    if (digit==0)
    {
        return count(n-1,0)+count(n-1,1);
    }else{
        return count(n-1,0);
    }
}

int main() {
    int n;
    cin>>n;
    cout<<count(n, 0);
    return 0;
}
