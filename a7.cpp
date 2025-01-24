/*7. Write a program to generate the first n numbers in the Fibonacci sequence.
The value of n should be entered by the user.*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of Fibonacci : ";
    cin>>n;
    int a=0, b=1;
    cout<<"Fibonacci Sequence:  "<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<a<<endl;
        int sum = a + b;
        a = b;
        b = sum;
    }
}

