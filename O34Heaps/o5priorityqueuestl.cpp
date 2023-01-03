#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;  // this is a max heap
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    cout<<pq.empty()<<endl;

    //min heap
    priority_queue<int, vector<int>, greater<int>> mp;
    mp.push(4);
    mp.push(2);
    mp.push(5);
    mp.push(3);
    cout<<mp.top()<<endl;
    return 0;
}