// Rotate an array 90 degrees anti-clockwise
#include<iostream>

using namespace std;

void transpose(int arr[][100], int r, int c){
    for (int i = 0; i < r-1; i++)
    {
        for(int j = i+1; j<c; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}
void rotate(int arr[][100], int r, int c){
    transpose(arr, r, c);
    int re;
    for(int i=0; i< r/2; i++){
        for(int j=0; j<c; j++){
            re = r-1-i;
            swap(arr[i][j], arr[re][j]); 
        }
    }
    for(int i=0; i<r; i++){
        for (int j = 0; j < c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
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
    rotate(arr, r, c);
    return 0;
}