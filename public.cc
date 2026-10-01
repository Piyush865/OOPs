#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age, roll;
    string grade;
};

int main(){
    student s1;
    s1.name = "Polu";
    s1.age = 20;
    s1.roll = 21;
    s1.grade = "A+";

    cout<<s1.name <<" ";
}