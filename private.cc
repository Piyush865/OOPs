#include<iostream>
using namespace std;

class student{
    string name;
    int age, roll;
    string grade;

    // function getter and setter are used for private class.
    public:
    void setname(string s){
        if(s.size() == 0){
            return;
        }
        name = s;
    }

    void setage(int a){
        if(age < 0 || age > 100){
            cout<<"Invalid age: ";
            return;
        }
        age = a;
    }

    void setroll(int r){
        roll = r;
    }

    void setgrade(string g){
        grade = g;
    }

    void getname(){
        cout<<name<<endl;
    }

    void getage(){
        cout<<age<<endl;
    }

    int getroll(){
        return roll;
    }

    string getgrade(int pin){
        if(pin == 123){
            return grade;
        }
        return " ";
    }
};

int main(){
    student s1;
    s1.setname("Polu");
    s1.setage(20);
    s1.setroll(21);
    s1.setgrade("A+");
    cout<<s1.getroll()<<endl;
}