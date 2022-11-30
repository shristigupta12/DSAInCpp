// give first non repeating character into a running stream of characters
#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<char> q;
    int freq[27] = {0}; // since 26 alphabets are there

    // running a stream until a '.'
    char ch;
    cin>>ch;
    while(ch!='.'){
        q.push(ch);
        freq[ch-'a']++;

        //queue
        while (!q.empty())
        {
            int el = q.front();
            if (freq[el-'a']>1)
            {
                q.pop(); 
            }else{
                cout<<q.front()<<endl;
                break;
            }  
        }
        if (q.empty())
        {
            cout<<-1<<endl; 
        } 
        cin>>ch;
    }
    return 0;
}