#include<iostream>

using namespace std;

int main() {
    char ch;
    ch = cin.get();   // instead of cin>>ch;
    int num = 0;
    while(ch!='$'){
        num+=1;
        ch = cin.get();  
    }
    cout<<num;
    return 0;
}