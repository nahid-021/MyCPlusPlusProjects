/* 8. Modify the Fibonacci program to calculate and display only the nth Fibonacci number.*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the fibonacci number: ";
    cin>>n;
    if(n<=0)
    {
        cout<<"Invalid input"<<endl;
        return 0;
    }
    int a=0, b=1, fib=0;
    if(n==1)
    {
        cout<<"The"<<n<<"th Fibonacci number is: "<<a<<endl;
    }
    else if(n==2)
    {
        cout<<"The "<<n<<"th Fibonacci number is: "<<b<<endl;
    }
    else
        {
        for(int i=2;i<n;i++)
        {
            fib=a+b;
            a=b;
            b=fib;
        }
        cout<<"The "<<n<< "th Fibonacci number is: "<<b<<endl;
        }
}
