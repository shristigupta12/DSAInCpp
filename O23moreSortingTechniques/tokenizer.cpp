#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char c[] = "Hi, there I am Shristi Gupta!";
    char *p = strtok(c, ", !");
    cout<<p<<endl;
    while(p!=NULL){
        p = strtok(NULL, ", !");
        cout<<p<<endl;
    }
    return 0;
}