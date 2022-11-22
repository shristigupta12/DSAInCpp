// Destructor is defined by default and we need to manually use it in case we have allocated memory dynamically in the program somewhere
#include<iostream>
#include<cstring>
using namespace std;

class car{
    private:
        float price;
    public:
        char *name;
        int model;
        car(){};
        car(char *n, int m, float p){
            model = m;
            price = p;
            name = new char[strlen(n)+1];
            strcpy(name, n);
        }
        car(car &x){   
            price = x.price;
            model = x.model;
            name = new char[strlen(x.name)+1]; // deep copy, otherwise in default there is shallow copy
            strcpy(name, x.name);
        }
        void print(){
            cout<<"The name of the car is "<<name<<endl;
            cout<<"The model number of the car is "<<model<<endl;
            cout<<"The price of the car is "<<price<<endl<<endl;
        }
        ~car(){
            cout<<"Inside destructor of car "<<name<<endl;
        }
};

int main(){
    // Static initialization
    car c("Audi", 232, 30000);
    car d(c);
    d.name[2] = 'l';
    c.print();
    d.print();
   
    // Dynamic initialization
    car *e = new car("Ferrari", 341, 60000);
    (*e).print();
    // e->print();  //or

    // delete keyword for dyanamically created objects
    delete e;
    return 0;
}
    