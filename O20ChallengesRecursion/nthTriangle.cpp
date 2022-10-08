#include<iostream>

using namespace std;

int triangle(int n, int i){
    if (i==n)
    {
        return i;
    }
    return i + triangle(n, i+1);
}

int main() {
    int n;
    cin>>n;
    cout<<triangle(n, 0);
    return 0;
}