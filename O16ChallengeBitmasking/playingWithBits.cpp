#include<iostream>

using namespace std;

long long int bitsNum(long long int a, long long int b){
    long long int answer = 0, i;
    for (long long int j = a; j <= b; j++){
        i = j;
        while(i!=0){
            if((i&1)==1){
                answer++;
            }
            i>>=1;
        }
    }  
    return answer; 
}

int main() {
    long long int q, a, b;
    cin>>q;
    for (int x = 0; x < q; x++){
        cin>>a>>b;
        cout<<bitsNum(a, b)<<endl;
    }  
    return 0;
}