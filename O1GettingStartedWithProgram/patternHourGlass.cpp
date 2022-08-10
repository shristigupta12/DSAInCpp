#include<iostream>

using namespace std;

void values(int a, int tab){
    for (int k = 0; k < tab; k++)
        {
            cout<<"   ";
        }      
        int j = a;
        while(j>=1){
            cout<<j<<"  ";
            j--;
        }
        while(j<=a){
            cout<<j<<"  ";
            j++;
        }
        cout<<endl;
}

int main() {
    int n;
    cin>>n;
    int i = 1;
    int tab = 0;
    while(i<=n+1){
        int lineMaxValue = n+1-i;
        values(lineMaxValue,tab);
        i++; 
        tab++;
    }
    i--;
    tab--;
    while(i>1){
        i--;
        tab--;
        int lineMaxValue = n+1-i;
        values(lineMaxValue,tab);
    }
    return 0;
}