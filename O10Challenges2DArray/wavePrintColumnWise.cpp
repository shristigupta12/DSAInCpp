#include<iostream>

using namespace std;

void wavePrintColumn(int arr[][100], int r, int c){
    for (int j = 0; j < c; j++){
        if(j%2==0){
            for (int i = 0; i < r; i++)
            {
                cout<<arr[i][j]<<", ";
            }           
        }else{
            for (int i = r-1; i >= 0; i--)
            {
                cout<<arr[i][j]<<", ";
            }           
        }
    }
    cout<<"END";
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
    wavePrintColumn(arr, r, c);
    return 0;
}