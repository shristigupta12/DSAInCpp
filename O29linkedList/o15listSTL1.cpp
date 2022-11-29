/*list methods : 
    push_back : inserting at tail
    push_front : inserting at head
    pop_back : removing from tail
    pop_front : removing from head
    insert : insert in middle
    erase : erase with index
    remove : remove a value
*/
#include<iostream>
#include<list>
#include<string>
using namespace std;

template<class datatype>
void print(list<datatype> l){
    for (auto it = l.begin(); it!=l.end(); it++)
    {
        cout<<*it<<"->";
    }
    cout<<endl;
}

int main(){
    list<int> l1;
    list<string> l2{"mango", "apple", "guava", "banana", "aesthetic"};

    l1.push_back(3);
    l1.push_front(2);
    l1.push_front(1);
    print(l1);

    l2.sort();
    l2.reverse();
    l2.pop_back();
    l2.reverse();
    // for(string fruit: l2){
    //     cout<<fruit<<"->";
    // }
    print(l2);
    cout<<endl;

//remove : removes all elements with the particular name
    l2.push_back("aesthetic");
    l2.push_back("aesthetic");
    l2.push_back("aesthetic");
    print(l2);
    string x;
    cin>>x;
    l2.remove(x);
    l2.remove("aesthetic");
    print(l2);

//erase : erases only the element whose index(through pointer) is 
    //  auto it = l2.begin()+2 : this won't work because elements are not continously arrannged
    auto it = l2.begin();
    it++;
    it++;
    l2.erase(it);
    print(l2);

//insert : using values and position
    it--;
    l2.insert(it, "fruitJuice");    
    print(l2);
    return 0;
}