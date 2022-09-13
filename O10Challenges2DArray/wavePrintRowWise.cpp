#include<iostream>

using namespace std;

void wavePrintRow(int arr[][100], int r, int c){
    for(int i=0; i<r; i++){
        if(i%2==0){
            for (int j = 0; j < c; j++)
            {
                cout<<arr[i][j]<<", ";
            }            
        }else{
            for(int j=c-1; j>=0; j--){
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
        for (size_t j = 0; j < c; j++)
        {
            cin>>arr[i][j];
        }       
    }
    wavePrintRow(arr, r, c);
    return 0;
}