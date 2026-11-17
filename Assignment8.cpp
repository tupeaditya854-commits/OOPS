#include <iostream>
using namespace std;


class Person 
{
protected:
    string name;
    int age;

public:
    void getPersonDetails() 
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPersonDetails() 
    {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
    }
};


class Employee : public Person 
{
protected:
    int employeeID;
    int salary;

public:
    void getEmployeeDetails() 
    {
        getPersonDetails();
        cout << "Enter Employee ID: ";
        cin >> employeeID;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayEmployeeDetails() 
    {
        displayPersonDetails();
        cout << "\nEmployee ID: " << employeeID;
        cout << "\nSalary: " << salary;
    }
};


class Manager : public Employee 
{
private:
    string department;

public:
    void getManagerDetails() 
    {
        getEmployeeDetails();
        cout << "Enter Department: ";
        cin >> department;
    }

    void displayManagerDetails() {
        displayEmployeeDetails();
        cout << "\nDepartment: " << department;
    }
};

int main() 
{
    Manager m1;

    m1.getManagerDetails();

    cout << "\n\n--- Manager Details ---";
    m1.displayManagerDetails();

    return 0;
}#include <iostream>
using namespace std;


class Person 
{
protected:
    string name;
    int age;

public:
    void getPersonDetails() 
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPersonDetails() 
    {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
    }
};


class Employee : public Person 
{
protected:
    int employeeID;
    int salary;

public:
    void getEmployeeDetails() 
    {
        getPersonDetails();
        cout << "Enter Employee ID: ";
        cin >> employeeID;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayEmployeeDetails() 
    {
        displayPersonDetails();
        cout << "\nEmployee ID: " << employeeID;
        cout << "\nSalary: " << salary;
    }
};


class Manager : public Employee 
{
private:
    string department;

public:
    void getManagerDetails() 
    {
        getEmployeeDetails();
        cout << "Enter Department: ";
        cin >> department;
    }

    void displayManagerDetails() {
        displayEmployeeDetails();
        cout << "\nDepartment: " << department;
    }
};

int main() 
{
    Manager m1;

    m1.getManagerDetails();

    cout << "\n\n--- Manager Details ---";
    m1.displayManagerDetails();

    return 0;
}