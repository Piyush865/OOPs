#include<iostream>
using namespace std;

class customer{
    string name;
    int *data;

    public:
    customer(string name){
        this->name = name;
        cout<<"constructor"<<name<<endl;
    }

    customer(){
        name = "A4";
    }
    ~customer(){
        cout<<"Destructor"<<name<<endl;
    }
};

int main(){
    customer A1("1"), A2("2"), A3("3");

    //dynamic create 
    customer *A4 = new customer;
    delete A4;
}