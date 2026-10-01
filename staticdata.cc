#include<iostream>
using namespace std;


// total customer = 0
// A1 : name bal acc tot
// A2 : name bal acc tot

class customer{
    string name;   // object
    int balance;    // object
    int account;    // object
    static int  total_customer;  // class. (private)
    static int total_balance;

    public:
    customer(string name, int bal, int acc){
        this->name = name;
        this->balance = bal;
        this->account = acc;
        total_customer++;
        total_balance += balance;
    }

    // Static memmber function
    static void accsesStatic(){
        cout<<"Total no. of cudtomer :"<<total_customer<<endl;
        cout<<"Total Balance :"<<total_balance<<endl;
    }

    void deposit(int amount){
        if(amount>0){
            balance += amount;
            total_balance +=amount;
        }
    }

    void withdraw(int amount){
        if(account<= balance && amount>0){
            balance -= amount;
            total_balance -= amount;
        }
    }
     
    void display(){
        cout<<name<<" "<<balance<<" "<<account<<" "<<total_customer<<" "<<endl;
    }
    void display_total(){
        cout<<total_customer<<endl;
    }
};

int customer::total_customer = 0;
int customer::total_balance = 0;

int main(){
    customer A1("polu", 1000, 1);
    customer A2("mohit", 2000, 2);
    customer A3("mohan",3000, 3);
    // A1.display();
    // A2.display();
    // A3.display();
    customer::accsesStatic();
  
    A1.deposit(5000);
    customer::accsesStatic();
    A2.withdraw(2000);
    customer::accsesStatic();
}