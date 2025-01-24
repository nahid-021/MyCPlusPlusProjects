/* Student Information
Define a structure Student with fields for name, roll number,
and marks in three subjects.
Write a program to input and display details of 5 students. */
#include <iostream>
using namespace std;
struct Student
{
    string name;
    int roll;
    int marks[3];
    void getInfo()
    {
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Roll number: ";
        cin>>roll;
        for(int i=0; i<3; i++)
        {
            cout<<"Enter Mark in subject["<<i+1<<"]: ";
            cin>>marks[i];
        }
    }
    void displayInfo()
    {
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student Roll number: "<<roll<<endl;
        for(int i=0; i<3; i++)
        {
            cout<<"Student Mark in subject["<<i+1<<"]: ";
            cout<<marks[i]<<endl;
        }
    }
};
int main()
{
    Student student1;
    student1.getInfo();
    student1.displayInfo();

    Student student2;
    student2.getInfo();
    student2.displayInfo();

    Student student3;
    student3.getInfo();
    student3.displayInfo();

    Student student4;
    student4.getInfo();
    student4.displayInfo();

    Student student5;
    student5.getInfo();
    student5.displayInfo();
}
