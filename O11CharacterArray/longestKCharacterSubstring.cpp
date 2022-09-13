// this is also called sliding window problem
#include<iostream>

using namespace std;

void answer(char s[], int k){
    int i=0, j=0, count=1, maxLen=-1,len, a, b;

    while(s[j]!='\0'){
        while(count<k){
            j++;
            if(s[j]!=s[j-1]){
                count++;
            }
        }
        while(s[j]==s[j+1]){
            j++;
        }
        len = j-i+1;
        if(len>maxLen){
            maxLen=len;
            a = i;
            b = j;
        }
        while(s[i]==s[i+1]){
            i++;
        }
        i++;
        count--;
    }
    cout<<maxLen<<" : ";
    for (int x = a; x <= b; x++)
    {
        cout<<s[x];
    }
    
}

int main() {
    char s[1000];
    cin.getline(s, 1000);
    int k;
    cin>>k;
    answer(s, k);
    
    return 0;
}