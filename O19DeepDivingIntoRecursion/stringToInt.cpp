#include<iostream>
#include<cstring>

using namespace std;

int stringToInt(string s, int n){
    if (n==0)
    {
        return 0;
    }
    
    int digit = s[n-1] - '0';
    return stringToInt(s, n-1)*10 + digit;
}

int main() {
    string s;
    cin>>s;
    int n = s.length();
    cout<<stringToInt(s, n);
    return 0;
}