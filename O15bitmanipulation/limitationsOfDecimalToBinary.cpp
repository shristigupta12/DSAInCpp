// If we want to reverse a number in binary format, then it is not possible in number because the range of long long int is smaller than a 32 digit number. So we will need to use array in that case
#include<iostream>
#include<cstring>

using namespace std;

string BinaryNumberReversal(int n){
    int count = 0;
    string s;
    while(count<32){
        s.push_back('0'+(n&1));
        n>>=1;
        count++;
    }
    return s;
}

int main() {
    int n;
    cin>>n;
    cout<<BinaryNumberReversal(n)<<endl;
    return 0;
}