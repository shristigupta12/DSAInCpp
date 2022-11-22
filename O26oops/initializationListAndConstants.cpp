// You cannot change the data members of const functions

#include<iostream>
#include<cstring>
using namespace std;

class car{
    private:
        float price;
    public:
        char name[20];
        int model_no;
        const int msp;

        car(): msp(99){
            cout<<"Default constructor called!"<<endl;
        }
        car(char *n, int m): msp(100){
            model_no = m;
            strcpy(name, n);
        }
        car(float p):msp(101){
            price = p;
        }
        void print() const{
            cout<<"The name of the car is : "<<name<<endl;
            cout<<"The model number of the car is : "<<model_no<<endl;
            cout<<"The price of the car is : "<<price<<endl;
            cout<<"msp is "<<msp<<endl<<endl;
        }

        void set_price(float p){
            int min = 111;
            if (p>0)
            {
                price = p;
            }else{
                price = min;
            }         
        }

        float get_price(){
            cout<<endl;
            return price;
        }
};

int main(){
    car c, d("bmw", 123), e(5600);
    c.print();
    d.print();
    e.print();
    return 0;
    }
