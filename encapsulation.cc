#include<iostream>
using namespace std;

class customer{
    string name;
    int balance;
    int age;

    public:
    customer(string a, int b, int c){
        name = a;
        balance = b;
        age = c;
    }

    void deposit(int amount){
        if(amount>0){
            balance += amount;
        }
        else{
            cout<<"Insuficent amount"<<endl;
        }
    }

    void display(){
        cout<<name<<" "<<balance<<" "<<age<<" "<<endl;
    }
};

int main(){
    customer A1("Polu", 100, 20);
    A1.deposit(-100);
    A1.display();
}