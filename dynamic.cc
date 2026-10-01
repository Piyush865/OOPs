#include<iostream>
using namespace std;

class student {
    public:
    string name;
    int age,roll;
    string grade;
};

int main(){
    student *s = new student;
    (*s).name ="Piyush";
    (*s).age = 20;
    (*s).roll = 234;
    (*s).grade = "A+";

    cout<<s->name<<endl;
    cout<<s->age<<endl;
    cout<<s->roll<<endl;
    cout<<s->grade<<endl;
}