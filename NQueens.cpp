// Place 4 Queens in a matrix such that there is no queen in the same row, column and diagonals
#include<iostream>
using namespace std;

bool ans = true;
int col = 0;

bool isSafeToPut(int board[][100], int i, int j, int n){
    for (int a = 0; a < n; a++)
    {
        if (board[i][a]==1 || board[a][j]==1)
        {
            return false;
        }      
    }
    
    int a = i;
    int b = j;
    while (j<n && i>=0)
    {
        if (board[i][j]==1)
        {
            return false;
        }
        i--;
        j++;
    }
    while (a>=0 && b>=0)
    {
        if (board[a][b]==1)
        {
            return false;
        }
        b--;
        a--;
    }
    return true;
}

bool answer(int board[][100], int n, int i){
    if (i==n)
    {
        //print board
        for (int d = 0; d < n; d++)
        {
            for (int c = 0; c < n; c++)
            {
                cout<<board[d][c]<<" ";
            }
            cout<<endl;
        }
        
        return true;
    }

    //recursive case
    int j = 0;
    while (j<n)
    {
        if (isSafeToPut(board, i, j, n))
        {
           board[i][j]=1;
           bool isRemainingSolved =  answer(board, n, i+1);
           if (isRemainingSolved)
           {
                return true;
           }
        }
        board[i][j]=0;
        j++;
    }
    return false;
    
}

int main(){
    int n;
    cin>>n;
    int board[100][100] = {0};
    answer(board, n, 0);
    return 0;
}