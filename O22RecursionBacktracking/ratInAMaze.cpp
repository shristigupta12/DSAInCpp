// Given a matrix and a rat needs to reach the cheese. PLaces with X cannot be traversed. Tell all possible ways through which rat can reach the cheese if it can only go towards right and down.

#include<iostream>
using namespace std;

int sol[100][100];

bool answer(char maze[][100], int i, int j, int n, int m ){
    //Base case
    if (i==n-1 && j==m-1)
    {
        sol[i][j]=1;
        for (int a = 0; a < n; a++)
        {
            for (int b = 0; b < m; b++)
            {
                cout<<sol[a][b]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return false;
    }
    //Recursive case
    sol[i][j]=1;
    //right side
    if (j+1<m and maze[i][j+1]!='X')
    {
        bool rightSideWay = answer(maze, i, j+1, n, m);
        if (rightSideWay==true)
        {
            return true;
        }      
    }
    //left side
    if (i+1<n and maze[i+1][j]!='X')
    {
        bool leftSideWay = answer(maze, i+1, j, n, m);
        if (leftSideWay==true)
        {
            return true;
        }      
    }

    sol[i][j]=0;
    return false;
    
}

int main(){
    char maze[][100] = {
        "0000",
        "00XX",
        "0000",
        "XX00",
    };
    answer(maze, 0, 0, 4, 4);
    return 0;
} 