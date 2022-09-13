#include<iostream>
#include<cstring>

using namespace std;

void rotation(char s[], int n){
    for (int i = strlen(s)-1; i >= 0; i--)
    {
        s[i+n]=s[i];
    }
    int i=0, j=strlen(s)-n;
    
    while(i<n){
        s[i]=s[j];
        i++;
        j++;
    }
    s[strlen(s)-n] = '\0';
    cout<<s;
}

int main() {
    char s[10];
    cin.getline(s, 10);
    int n;
    cin>>n;
    rotation(s, n);
    
    return 0;
}