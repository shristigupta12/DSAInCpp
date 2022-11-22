#include<iostream>
using namespace std;

class car{
    private:
        float price;
    public:
        char name[20];
        int model_no;

        void print(){
            cout<<endl<<"The name of the car is : "<<name<<endl;
            cout<<"The model number of the car is : "<<model_no<<endl;
            cout<<"The price of the car is : "<<price<<endl;
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
            return price;
        }
};

int main(){
    car c;
    c.name[0] = 'B';
    c.name[1] = 'M';
    c.name[2] = 'W';
    c.name[3] = '\0';
    c.model_no = 1340;
    c.set_price(500);
    cout<<c.get_price();
    c.print();
    return 0;
    }