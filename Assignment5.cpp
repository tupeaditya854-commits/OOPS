#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;
    int roll_no;

public:
    void setData(string name, int age, int roll_no)
    {
        this->name = name;
        this->age = age;
        this->roll_no = roll_no;
    }

    void display()
    {
        cout<<"Name: " << name << endl;
        cout<<"Age: " << age << endl;
        cout<<"Roll No. : "<<roll_no<<endl;
    }
};

int main()
{
    Student s;

    s.setData("Aditya", 18,11);
    s.display();

    return 0;
}