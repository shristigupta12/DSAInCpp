#include<iostream>

using namespace std;

void pattern(int n, int i){
    if (i==n)
    {
        return;
    }
    
    for (int a = 0; a <= i; a++)
    {
        cout<<"*    ";
    }
    cout<<endl;
    pattern(n, i+1);
}

int main() {
    int n;
    cin>>n;
    pattern(n, 0);
    return 0;
}