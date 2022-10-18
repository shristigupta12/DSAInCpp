#include<iostream>

using namespace std;

void spiralPrint(int r, int c){
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>arr[i][j];
        }       
    }

    int rs = 0;
    int re = r-1;
    int cs = 0;
    int ce = c-1;
    while(rs<=re || cs<=ce){
        int i,j;
        //1
        i = rs;
        for (j = cs; j <= ce; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        rs++;
        cout<<endl;
        //2
        j = ce;
        for (i = rs; i <= re; i++)
        {
            cout<<arr[i][j]<<" ";
        }
        ce--;
        cout<<endl;
        //3
        if(rs<re){
            i = re;
            for (j = ce; j >= cs; j--)
            {
                cout<<arr[i][j]<<" ";
            }
            re--;
            cout<<endl;
        }
        //4
        if(cs<ce){
            j = cs;
            for (i = re; i >= rs; i--)
            {
                cout<<arr[i][j]<<" ";
            }
            cs++;
            cout<<endl;      
        }
    }
}

int main() {
    int r, c;
    cin>>r>>c;
    spiralPrint(r,c);
    
    return 0;
}