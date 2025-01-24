/* 2. Write a program to check if a
given year is a leap year. */
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year: ";
    cin>>year;
    if(year%4==0 && year%100!=0 || year%400==0)
    {
        cout<<"year "<<year<<" is a Leap year"<<endl;
    }
    else
    {
        cout<<"Not a leap Year"<<endl;
    }
}

