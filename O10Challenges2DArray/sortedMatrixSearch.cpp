#include<iostream>

using namespace std;

int staircaseSearch(int arr[][100], int r, int c, int target){
    int ri=0, ci=c-1;
    while(ri<r and ci>=0){
        if (arr[ri][ci]==target)
        {
            return 1;
        }
        if(arr[ri][ci]>target){
            ci--;
        }else{
            ri++;
        }
    }
    return 0;
}

int main() {
    int r, c, t;
    cin>>r>>c;
    int arr[r][100];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>arr[i][j];
        }       
    }
    cin>>t;
    cout<<staircaseSearch(arr, r , c, t);
    
    return 0;
}