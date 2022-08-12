//Given a number N (denoting one of the legs of the triangle), Print its Pythagoras pair in increasing order if they exist. Otherwise, print "-1".
#include<iostream>
#include<cmath>

using namespace std;

void ans(int n){   
    int l = n;
    int h = -1;
    while(l>=1){
        int sq = (n*n)+(l*l);
        h = sqrt(sq);
        if(n+l<h){
            break;
        }else{
            if(h*h==sq){
                cout<<l<<"  "<<h<<endl;
                break;
            }
        }
        l--;
    }
    l = n+1;
    int sq = (n*n)+(l*l);
    h = sqrt(sq);
    while(h+n>l){
        if(h*h==sq){
            cout<<l<<"  "<<h<<endl;
            break;
        }
        l++;
        h = sqrt(sq);
    }
    if(h+n<=l){
        cout<<-1<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    ans(n);
    return 0;
}