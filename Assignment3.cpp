#include<iostream>
#include<string>
using namespace std;

class Employee 
{
public:
    string name;
    int empid;
    float salary;

    void display() 
    {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << empid << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() 
{
 Employee e1,e2;

     cout << "Enter details for Employee 1:\n";
        cout << "Name: ";
        cin >> e1.name;
        cout << "Employee ID: ";
        cin >> e1.empid;
        cout << "Salary: $ ";
        cin >> e1.salary;

    cout << "\nEnter details for Employee 2:\n";
        cout << "Name: ";
        cin >> e2.name;
        cout << "Employee ID: ";
        cin >> e2.empid;
        cout << "Salary: $ ";
        cin >> e2.salary;
    cout<<endl;
    cout<<endl;
     cout<<" EMPLOYEE DETAILS ::   "<< endl;

    cout << "\nEmployee 1 Details:\n";
    e1.display();

    cout << "\nEmployee 2 Details:\n";
    e2.display();

    return 0;
}