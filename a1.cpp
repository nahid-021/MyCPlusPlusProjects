/*1. Grade Evaluation: Write a program that takes a student's
marks (0 to 100) as input and determines the grade based on
the following criteria: Marks > = 90: Grade A, Marks >= 80
and < 90: Grade B, Marks >= 70 and < 80: Grade C, Marks >= 60
and < 70: Grade D, Marks < 60: Grade F */
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"The number of subjects: ";
    cin>>marks;
    if(marks>100 || marks<0)
    {
        cout<<"Invalid Input"<<endl;
    }
    if(marks>=90)
    {
        cout<<"Grade A"<<endl;
    }
    else if(marks<90 && marks>=80)
    {
        cout<<"Grade B"<<endl;
    }
    else if(marks<80 && marks>=70)
    {
        cout<<"Grade C"<<endl;
    }
    else if(marks >= 60 && marks< 70)
    {
        cout<<"Grade D"<<endl;
    }
    else
    {
        cout<<"Grade F"<<endl;
    }
}
