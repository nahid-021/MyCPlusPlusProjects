/* Fibonacci Series
Create a function void printFibonacci(int n) that
generates the Fibonacci series up to n terms.
Use the function in a program to display the series. */
#include <iostream>
using namespace std;
void printFibonacci(int n) {
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        int c = a+b;
        a = b;
        b = c;
    }
}
int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<"Fibonacci series upto "<<n<<" :";
    printFibonacci(n);
}
