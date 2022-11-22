// 1. Copy constructor 
// 2. Copy assignment operator
// 3. Destructor
#include<iostream>
#include<cstring>
using namespace std;

class car{
    private:
        float price;
    public:
        string name;
        int modelNo;
    
        void set_price(float p){
            price = p;
        }
        float get_price(){
            return price;
        }

        car(){
            cout<<endl<<"Default constructor called"<<endl;
        }
        car(string n, int model){
            name = n;
            modelNo = model;
        }
        car(float p){
            int def = 111;
            if (p>0)
            {
                price = p;
            }else{
                price = def;
            } 
        }

        void print(){
            cout<<endl<<"The name of the car is : "<<name<<endl;
            cout<<"The price of the car is : "<<price<<endl;
            cout<<"The model number of the car is : "<<modelNo<<endl;
        }

        car(car &x){  // This is already written in default
            name = x.name;
            price = x.price;
            modelNo = x.modelNo;
        }
};

int main(){
    car c, d("Audi", 1453), e(45000);

    car a = d; //copy constructor
    car f(d);  //another way to call copy constructor

    d.set_price(4000);
    a.set_price(4500);

    d.print();
    a.print();
    
    return 0;
    }