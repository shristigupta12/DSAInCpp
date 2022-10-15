// Given a number. Enter the possible combinations of characters corresponding to the digits. Like 23
// will give ad, ae, af, bd, be, bf, cd, ce, cf. Since abc correspond to 2 and def correspond to 3.
#include<iostream>
#include<cstring>
using namespace std;

string keys[10] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

void combinations(char* n, char *out, int i, int j ){
    if (n[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<" ";
        return;
    }
    int digit = n[i] - '0';
    for (int k = 0; keys[digit][k]!='\0'; k++)
    {
        out[j]=keys[digit][k];
        combinations(n, out, i+1, j+1);
    }
    
}

int main(){
    char n[100];
    cin>>n;
    char out[100];
    combinations(n,out, 0, 0);
    return 0;
}