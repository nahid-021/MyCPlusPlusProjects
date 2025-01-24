/* Employee Payroll System
Create a structure Employee with fields for
employee ID, name, and salary. Write a program to input data
for 3 employees and calculate the total salary. */
#include <iostream>
using namespace std;
struct Employee
{
    int id;
    string name;
    int salary;
    void getInfo()
    {
        cout<<"Enter Id: ";
        cin>>id;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter salary: ";
        cin>>salary;
    }
    void displayInfo()
    {
        cout<<"Employee ID: "<<id<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee Salary: "<<salary<<endl;
    }
};
int main()
{
    Employee employee1;
    employee1.getInfo();
    employee1.displayInfo();

    Employee employee2;
    employee2.getInfo();
    employee2.displayInfo();

    Employee employee3;
    employee3.getInfo();
    employee3.displayInfo();

    int totalSalary;
    totalSalary=employee1.salary+employee2.salary+employee3.salary;
    cout<<totalSalary;
}
