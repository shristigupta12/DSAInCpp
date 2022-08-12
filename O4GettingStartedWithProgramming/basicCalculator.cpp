#include<iostream>

using namespace std;

int switchCase(char ch,int n1,int n2){
    switch (ch){
            case '+':
                return n1+n2;
            case '-':
                return n1-n2;
            case '*':
                return n1*n2;
            case '/':
                if(n2!=0){                    
                    return n1/n2;
                }
                break;
            default:
                if(n2!=0){                    
                    return n1%n2;
                }
                break;
        } 
    return 0;
}

int main() {  
    char ch;
    cin>>ch;
    ch = tolower(ch);  
    while((ch!= 'x')){
            if( ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='%'){
                int n1, n2;
                cin>>n1>>n2;
                cout<<switchCase(ch, n1, n2)<<endl;
            }else{
                cout<<"Invalid operation. Try again."<<endl;
            }
        cin>>ch;
        ch = tolower(ch);            
    }
    return 0;
}