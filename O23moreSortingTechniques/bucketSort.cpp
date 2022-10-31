#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

class students{
    public:
        int marks;
        string name;
};

void bucketSort(students *s, int n){
    vector<students> st[101];
    for (int i = 0; i < n; i++)
    {
        st[s[i].marks].push_back(s[i]);
    }
    cout<<endl;
    for (int i = 100; i >=0; i--)
    {
        for (vector<students>:: iterator it = st[i].begin();it!=st[i].end();it++)
        {
            cout<<(*it).name<<" : "<<(*it).marks<<endl;
        }     
    }  
}

int main(){
    int n;
    cin>>n;
    students s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i].name>>s[i].marks;
    }
    bucketSort(s, n);
    return 0;
}