#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    string sub;
    for(int i=1; i<=s.length(); i++ ){
        for(int j=0; j<=s.length()-i+1; j++){
            sub = "";
            for(int k=j; k<i+j; k++){
                if(i+j>s.length()){
                    continue;
                }
                sub.push_back(s[k]);  // string mein characters add krna nahi aa rha
            }
            cout<<sub<<" ";
        }
        cout<<endl;
    }
    return 0;
}