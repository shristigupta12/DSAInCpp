#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

class Vector{
    int *arr;
    int cs;
    int maxSize;
    public:
        Vector(int defaultSize = 4){
            maxSize = defaultSize;
            cs = 0;
            arr = new int[maxSize];
        }
        void pushBack(int a){
            if (cs==maxSize)
            {
                int *oldArray = arr;
                arr = new int[2*maxSize];
                maxSize = 2*maxSize;
                for (int i = 0; i <= cs; i++)
                {
                    arr[i]=oldArray[i];
                }
                delete [] oldArray;
            }
        arr[cs] = a;
        cs++;
        }
        bool empty(){
            return cs==0;
        }
        void pop_back(){
            if (!empty())
            {
                cs--;
            }         
        }
        void print(){
            for (int i = 0; i < cs; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;           
        }
        int getSize(){
            return cs;
        }
        int getMaxSize(){
            return maxSize;
        }
        int& operator[](int i){
            return arr[i];
        }
        
};
ostream& operator<< (ostream &os, Vector &v){
    v.print();
    return os;
}

int main(){
    Vector v;
    cout<<"max size = "<<v.getMaxSize()<<endl;
    int x;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        v.pushBack(x);
    }
    cout<<"max size = "<<v.getMaxSize()<<endl;

    // [] operator overloading
    for (int i = 0; i < v.getSize(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // <<  operator overloading
    Vector f;
    f=v;
    cout<<v<<f;

    //pass by reference in [] operator function
    v[2]=4;
    v[2]+=4;
    cout<<v[2];
    return 0;
}