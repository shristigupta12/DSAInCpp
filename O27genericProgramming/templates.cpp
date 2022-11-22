#include<iostream>
using namespace std;

template<typename t>
int search(t arr[], int n, t key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
    }
    return n;
}

int main(){
    int arr[] = {1, 2, 4, 3, 6};
    int key = 4;
    cout<<search(arr, 5, key )<<endl;
    return 0;
} 