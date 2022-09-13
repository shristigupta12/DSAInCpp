#include<iostream>

using namespace std;

int main() {
    char s[10];
    cin.getline(s,10);
    int num[26] = {0};
    int i=0;
    while(s[i]!='\0'){
        int ind = s[i]-'a';
        num[ind]++;
        i++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(num[i]>0){
            int var = i +'a';
            cout<<(char)var<<" = "<<num[i]<<endl;
        }
    }
    
    return 0;
}