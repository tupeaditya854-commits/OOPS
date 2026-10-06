#include <iostream>
using namespace std;


class Person 
{
protected:
    string name;
    int age;
    string contact;

public:
    void getPersonDetails() 
    {
        cout << "Enter NAME : ";
        cin >> name;
        cout << "Enter AGE : ";
        cin >> age;
        cout << "Enter CONTACT NUMBER : ";
        cin >> contact;
    }

    void displayPersonDetails() 
    {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nContact: " << contact;
    }
};


class Student : public Person
{
private:
    string rollNo;
    string branch;

public:
    void getStudentDetails() 
    {
        getPersonDetails();

        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Branch: ";
        cin >> branch;
    }

    void displayStudentDetails() 
    {
        displayPersonDetails();

        cout << "\nRoll Number: " << rollNo;
        cout << "\nBranch: " << branch;
    }
};

int main() 
{
    Student s;

    s.getStudentDetails();

    cout << "\n\n--- Student Information ---";
    s.displayStudentDetails();

    return 0;
}