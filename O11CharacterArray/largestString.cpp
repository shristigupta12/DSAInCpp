#include<iostream>
#include<cstring>
using namespace std;

void copy(char l[], char a[]){
    for (int i = 0; i < strlen(a); i++)
    {
        l[i]=a[i];
    }
}

int main() {
    char a[1000];
    char largest[1000];
    int largest_len, n;
    cin>>n;
    cin.get();
    for (int i = 0; i < n; i++)
    {
        cin.getline(a, 1000);
        if(largest_len< strlen(a)){
            largest_len = strlen(a);
            copy(largest, a);
        }   
    }
    cout<<endl<<"Largest String : "<<largest<<". Length : "<<largest_len<<endl;
    return 0;
}