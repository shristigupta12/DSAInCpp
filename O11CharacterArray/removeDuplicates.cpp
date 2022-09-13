#include<iostream>
#include<cstring>

using namespace std;

void removeDuplicates(char s[]){
    int i=0; int j=1;
    while(j<strlen(s)){
        if(s[i]!=s[j]){
            i++;
            s[i]=s[j];
        }else{
            j++;
        }
    }
    s[i+1]='\0';
}

int main() {
    char s[1000];
    cin.getline(s, 1000);
    removeDuplicates(s);
    cout<<"Removing duplicates : "<<s<<endl;
    
    return 0;
}