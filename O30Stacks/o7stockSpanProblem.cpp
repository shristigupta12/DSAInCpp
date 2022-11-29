#include<iostream>
#include<stack>
using namespace std;

int span(stack<pair<int,int>> s, int d){
    if (d==0)
    {
        return 1;
    }
    while(s.top().first != d && !s.empty()){
        s.pop();
    }
    int price = s.top().second;
    int sp = 1;
    s.pop();
    while(s.top().second<price && !s.empty()){
        s.pop();
        sp++;
    }
    return sp;
}

int main(){
    stack<pair<int,int>> stock;
    stock.push(make_pair(0,100));
    stock.push(make_pair(1,80));
    stock.push(make_pair(2,60));
    stock.push(make_pair(3,70));
    stock.push(make_pair(4,60));
    stock.push(make_pair(5,75));
    stock.push(make_pair(6,85));

    int day;
    cin>>day;
    cout<<span(stock,day);
    return 0;
}