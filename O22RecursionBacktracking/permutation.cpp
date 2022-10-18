// Write all the permutations of string abc

#include<iostream>
#include<set>
#include<string>

using namespace std;

void permutations(char*c, int i, set<string> &s){
    //Base case
    if (c[i]=='\0')
    {
        // cout<<c<<endl; //Instead of this we included set in order to get unique permutations
        string st = c;
        s.insert(st);
        return;
    }
    
    //Recursive case
    for (int j = i; c[j]!='\0'; j++)
    {
        swap(c[i], c[j]);
        permutations(c, i+1,s);
        swap(c[i],c[j]);
    }
    
}

int main(){
    char c[100];
    cin>>c;
    cout<<endl;
    set <string>s;
    permutations(c, 0, s);
    cout<<endl;
    for(auto str: s){
        cout<<str<<endl;
    }
    return 0;
}