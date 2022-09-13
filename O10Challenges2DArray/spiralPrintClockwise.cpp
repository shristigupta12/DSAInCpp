#include<iostream>

using namespace std;

void spiralPrint(int arr[][100], int r, int c){
    int rs = 0, re = r-1, cs = 0, ce=c-1, i;

    while(rs<=re || cs<=ce ){
        if(rs<=re){
            for (i = cs; i <= ce; i++){
                cout<<arr[rs][i]<<", ";
            }
        }
        rs++;

        if(cs<ce){
            for (i = rs; i <=re; i++){
                cout<<arr[i][ce]<<", ";
            }
        }    
        ce--;

        if(rs<=re){
            for (i = ce; i >= cs; i--){
                cout<<arr[re][i]<<", ";
            }
        }
        re--;

        if(cs<ce){
            for ( i = re; i >= rs; i--){
                cout<<arr[i][cs]<<", ";
            }
        }   
        cs++;

    }
    
    
    
}

int main() {
    int r, c;
    cin>>r>>c;
    int arr[r][100];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++)
        {
            cin>>arr[i][j];
        }       
    }
    spiralPrint(arr, r, c);
    return 0;
}