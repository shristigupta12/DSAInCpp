#include<iostream>
#include<string>


using namespace std;

int main() {
    string s = "Hello there this is Shristi!";
    string word = "there";

    cout<<s.find(word)<<endl;
    
    s.erase(6, word.length()+1);
    cout<<s<<endl;

    return 0;
}