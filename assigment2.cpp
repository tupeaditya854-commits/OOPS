#include<iostream>
using namespace std;


class Employee
{
 public: 
 string employee_name ,employee_email , address;
 int number , employee_id ;
 int salary;


void display()
{
  cout<<"-------------- EMPLOYEE DETAILS -------------"<<endl<<endl;
  cout<<" Employee name : "<< employee_name<<endl;
  cout<<" Employee Salary : "<< salary<<endl;
  cout<<" Employee Email : "<<employee_email<<endl;
  cout<<" Employee ID : "<<employee_id<<endl;
  cout<<" Employee Phone Number :  "<<number<<endl;
  cout<<" Employee Address : "<<address<<endl;


}
};
int main ()
{
Employee e1;
cout << "Enter details for Employee :\n";
    cout << "Employee Name: ";
    cin >> e1.employee_name;
    cout << "Employee Id: ";
    cin >> e1.employee_id;
    cout << "Employee email: ";
    cin >> e1.employee_email;
    cout << "Employee Phone Number: ";
    cin >> e1.number;
    cout << "Employee Salary : ";
    cin >> e1.salary;
    cout<<" Employee Address : ";
    cin>> e1.address;
    e1.display(); 
}

