#include<iostream>
#include<string>
#include<list>
using namespace std;

class book{
    public:
    string name;
    int price;
        book(string name, int price){
            this->name = name;
            this->price = price;
        }
};

bool compareBooks(book A, book B){
    if (A.name==B.name)
    {
        return true;
    }
    return false;
}

template<class bookIterator, class compObject>
bookIterator search(bookIterator start, bookIterator end, compObject obj){
    while(start!=end)
    {
        if (compareBooks(*start,obj))
        {
            return start;
        }
        start++;
    }
    return end;
}


int main(){
    book b1("C++", 100);
    book b2("Java", 200);
    book b3("Python", 350);
    list<book> l;
    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);
    book bComp("C1++",100);
    auto it = search(l.begin(),l.end(),bComp);
    if (it==l.end())
    {
        cout<<"Book not found in the library!"<<endl;
    }else{
        cout<<"Book found in the library!"<<endl;
    }
    
    return 0;
}