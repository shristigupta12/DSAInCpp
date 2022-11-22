#include<iostream>
#include<list>
using namespace std;


template<class forwardIterator, class T>
forwardIterator search(forwardIterator start, forwardIterator end, T key){
    while(start!=end){
        if (*start==key)
        {
            return start;
        }
        start++;
    }
    return end;
}

int main(){
    list<int> l;
    l.push_back(1);
    l.push_back(3);
    l.push_back(6);
    l.push_back(9);
    auto it = search(l.begin(), l.end(),3);
    if (it==l.end())
    {
        cout<<"Element not present"<<endl;
    }else{
        cout<<*it<<endl;
    }
    
    return 0;
}