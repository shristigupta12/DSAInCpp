#include<iostream>

using namespace std;

void values(int i, int tab1){
    for (int j = 0; j < tab1; j++)
        {
            cout<<"     ";
        }
        int val = i+1;
        while(val>=1){
            cout<<val<<"    ";
            val--;
        }
        int tab2 = (2*i) -1;       
        for(int j = 0; j<tab2; j++){
            cout<<"     ";
        }
        val++;
        if(i!=0){
            while(val<=i+1){
                cout<<val<<"    ";
                val++;
            }
        }
        cout<<endl;
}

int main() {
    int n;
    cin>>n;
    int i=0;
    int tab1 = n-1;
    while(i<(n+1)/2){
        values(i, tab1);       
        tab1-=2;
        i++;
    }
    i--;
    tab1+=2;
    while(i>0){
        i--;
        tab1+=2;
        values(i, tab1);
    }

    
    return 0;
}