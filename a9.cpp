/* 9. Create a program that converts a temperature entered
in Celsius to Fahrenheit and vice versa. Use explicit type
casting where necessary.*/
#include<iostream>
using namespace std;
int main()
{
float n,c,f;
cout<<"If it is Celsius to Fahrenheit type 1 else 2: ";
cin>>n;
if(n==1)
{
    cout<<"Enter Celsius: ";
    cin>>c;
    f=(c/5)*9+32;
    cout<<"Fahrenheit: "<<f<<endl;
}
if(n==2)
{
    cout<<"Enter Fahrenheit: ";
    cin>>f;
    c=((f-32)/9)*5;
    cout<<"Celsius: "<<c<<endl;
}
}
