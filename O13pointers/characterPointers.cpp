#include<iostream>

using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    cout<<arr<<endl;   //gives address of 1
    char carr[] = "abcde";
    cout<<carr<<endl;  // it will not give address of a

    // For printing the address of a character through pointer, we'll forcefully use TYPECASTING
    char ch = 'B';
    char *chptr = &ch;
    cout<<(int*)chptr<<endl;    // we can also use float or void instead of int
    int a = 10;
    return 0;
}