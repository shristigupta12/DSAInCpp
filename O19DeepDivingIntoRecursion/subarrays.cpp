#include<iostream>
#include<cstring>
#include <bits/stdc++.h>

using namespace std;

void subArray(char*c, char ans[], int i, int j){
    if (c[i]=='\0')
    {
        ans[j]='\0';
        cout<<ans<<" ";
        return;
    }   
    subArray(c,ans,i+1,j);
    ans[j]=c[i];
    subArray(c,ans,i+1,j+1);
}

int main() {
    char c[1000];
    cin>>c;
    char ans[1000];
    subArray(c, ans, 0,0);
    return 0;
}
