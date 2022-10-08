#include<iostream>
#include<cstring>

using namespace std;

string replacePi(char *s, int i){
    if (s[i]=='\0')
    {
        return s;
    }
    if (s[i]=='p' && s[i+1]=='i'){
        int x = i+2;
        while(s[x]!='\0'){
            x++;
        }
        while(x>=i+2){
            s[x+2]=s[x];
            x--;
        }
        s[i]='3';
        s[i+1]='.';
        s[i+2]='1';
        s[i+3]='4';
        return replacePi(s, i+4);      
    }else{
        return replacePi(s, i+1);   
    }
}

int main() {
    char s[1000];
    cin>>s;
    cout<<replacePi(s, 0);
    return 0;
}