#include<iostream>

using namespace std;

int whoWins(int, int);
void winner(int a, int b){
    if(whoWins(a, b)==1){
        cout<<"Aayush"<<endl;
    }else{
        cout<<"Harshit"<<endl;
    }
}

int main() {
    int a;
    cin>>a;
    int n, m;
    while(a>0){
        cin>>n>>m;
        winner(n, m);
        a--;
    }
    return 0;
}

int whoWins(int a, int b){
    int count =1;
    int alimit = a;
    int hlimit = b;
    int asum = 0;
    int hsum = 0;
    bool sum = true;
    while(sum){
        if(asum+count>alimit){
            return 2;
        }
        asum+=count;
        count++;
        if(hsum+count>hlimit){
            return 1;
        }
        hsum+=count;
        count++;
    }
}