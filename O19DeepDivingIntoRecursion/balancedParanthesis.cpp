#include<iostream>

using namespace std;

void paranthesisWays(int n, int o, int c, char*a, int i){
    if (c==n)
    {
        a[i]='\0';
        cout<<a<<endl;
        return;
    }
    if (o<n)
    {
        a[i]='(';
        paranthesisWays(n,o+1,c,a,i+1);
    }
    if (o>c)
    {
        a[i]=')';
        paranthesisWays(n,o,c+1,a,i+1);
    }
}

int main() {
    int n;
    cin>>n;
    char a[100];
    paranthesisWays(n,0,0, a,0);
    return 0;
}