// GIven N X N sudoku where N is a perfect square. Fill up the empty spaces such that every row, column and grid has numbers from 1 to N

#include<iostream>
#include<cmath>
using namespace std;

bool canPlace(int mat[][100], int i, int j, int n, int x){
    for (int a = 0; a < n; a++)
    {
        if (mat[i][a]==x || mat[a][j]==x)
        {
            return false;
        }       
    }
    int rt = sqrt(n);
    int r = (i/rt)*rt;
    int c = (j/rt)*rt;
    for (int a = r; a < r+rt; a++)
    {
        for (int b = c; b < c+rt; b++)
        {
            if (mat[a][b]==x)
            {
                return false;
            }           
        }       
    }
    return true;
}

bool sudokuSolve(int mat[][100], int i, int j, int n){
    //base case
    if (i==n)
    {
        //print the matrix
        for (int a = 0; a < n; a++)
        {
            for (int b = 0; b < n; b++)
            {
                cout<<mat[a][b]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    
    //Condtitions
    if (j==n)
    {
        return sudokuSolve(mat, i+1, 0,n);
    }
    if (mat[i][j]!=0)
    {
        return sudokuSolve(mat, i, j+1, n);
    }
    
    //Recursive case
    for (int x = 1; x < 10; x++)
    {
        if (canPlace(mat, i, j, n, x))
        {
            mat[i][j]=x;
            bool remainSudoku = sudokuSolve(mat, i, j+1, n);
            if (remainSudoku)
            {
                return true;
            }         
        }       
    }
    //Backtrack
    mat[i][j]=0;
    return false;
}

int main(){
    // int mat[9][9] = {
    //     {5, 3, 0, 0, 7, 0, 0, 0, 0},
    //     {6, 0, 0, 1, 9, 5, 0, 0, 0},
    //     {0, 9, 8, 0, 0, 0, 0, 6, 0},
    //     {8, 0, 0, 0, 6, 0, 0, 0, 3},
    //     {4, 0, 0, 8, 0, 3, 0, 0, 1},
    //     {7, 0, 0, 0, 2, 0, 0, 0, 6},
    //     {0, 6, 0, 0, 0, 0, 2, 8, 0},
    //     {0, 0, 0, 4, 1, 9, 0, 0, 5},
    //     {0, 0, 0, 0, 8, 0, 0, 7, 9}
    // };
    int n;
    cin>>n;
    int mat[n][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>mat[i][j];
        }
        
    }
    
    sudokuSolve(mat, 0, 0, n);
    return 0;
}