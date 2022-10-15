#include<iostream>
using namespace std;

void combinations(char *inp, char *out, int i, int j){
    //base case
    if (inp[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<" ";
        return;
    }
    
    //recursive case
    
    int digit = inp[i]-'0';
    char c;
    if (digit==0)
    {
        c = '\0';
    }else{
        c = (char)(digit+64);
    }
    out[j] = c;
    combinations(inp, out, i+1, j+1);
    
    if (inp[i+1]!='\0')
    {
        int d1 = inp[i]-'0';
        int d2 = inp[i+1]-'0';
        digit = d1*10+d2;
        if (digit<=26)
        {
            if (digit==0)
            {
                c='\0';
            }else{
                c = (char)(digit+64);
            }
            out[j] = c;
            combinations(inp, out, i+2, j+1);           
        }       
    }  
}

int main(){
    char inp[100];
    cin>>inp;
    char out[100];
    combinations(inp, out, 0, 0);
    //123 = ABC, LC, AW
    return 0;
}