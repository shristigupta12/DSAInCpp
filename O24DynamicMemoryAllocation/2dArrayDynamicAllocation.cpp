// Cannot make directly a 2d array. We will need a pointer which points to the address of the rows
#include<iostream>
using namespace std;

int main(){
    int row, col;
    cin>>row>>col;

    int **arr = new int *[row];

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    int val=1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j]=val;
            val++;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}