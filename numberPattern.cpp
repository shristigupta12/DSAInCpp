#include<iostream>

using namespace std;

int main() {
    int size;
    cout<<"Enter the length of the pattern: ";
    cin>>size;
    int space = (2*size)-1;
    for (int i = 0; i < size; i++)
    {
        int n = 1;
        for(int t=0; t<=size-i; t++ ){
            cout<<" ";
        }
        space--;
        for(int j=0; j<(2*i)+1; j++){
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }
    
    return 0;
}