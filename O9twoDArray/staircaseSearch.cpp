// This technique is only possible if the matrix is sorted both row-wise and column-wise
#include<iostream>

using namespace std;

void staircaseSearch(int arr[][100], int r, int c, int target){
    int i=0, j=c-1;
    while(i<r and j>-1){
        if(arr[i][j]==target){
            cout<<"Row: "<<i<<"Column: "<<j;
            break; 
        }
        else if(arr[i][j]>target){
            j--;
        }
        else{
            i++;
        }
    }
    if(i==r or j==-1){
        cout<<"Element not found"<<endl;
    }
}

int main() {
    int r, c;
    cin>>r>>c;
    int arr[r][100];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>arr[i][j];
        }        
    }
    int target;
    cin>>target;
    staircaseSearch(arr, r, c, target);
    return 0;
}