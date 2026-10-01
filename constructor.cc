#include<iostream>
using namespace std;

class customer{
    string name;
    int account;
    int balance;

    public:
    // Default constructor
    customer(){
        name = "Rohit";
        account = 234;
        balance = 123;
    }
    
    // Parameterized constructor
    customer(string name, int account, int balance){
        this->name = name;
        this->account = account;
        this->balance = balance;
    }

    // inline constructor
    // inline customer(string a, int b, int c): name(a), account(b), balance(c){

    // }

    void display(){
        cout<<name<<" "<<account<<" "<<balance<<endl;
    }

     // Copy Constructor

    customer(customer &B){
        name = B.name;
        account = B.account;
        balance = B.balance;
    }
};

int main(){
    customer A1;
    customer A2("Rohit", 123, 345);
    A1.display();
    A2.display();
    customer A3(A2);
    A3.display();
    customer A4;
    A4 = A3;
    A4.display();
}
