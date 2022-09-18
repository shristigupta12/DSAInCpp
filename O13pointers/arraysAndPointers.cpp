#include<iostream>

using namespace std;

void update(int *a, int n){
    for (int i = 0; i < n; i++)
    {
        *(a+i)+=1;
    }   
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    update(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout<<*(arr+i)<<" ";
    }
    
    return 0;
}