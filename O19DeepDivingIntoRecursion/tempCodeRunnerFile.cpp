// return string with n digits in binary form which does not contain any consecutive ones.
#include<iostream>

using namespace std;

int num = 0;
int p = 1;
int count(int n,int digit){
    if (n==1)
    {
        if (digit==0)
        {
            return 2;