/* Factorial Using a Function
Create a function int factorial(int n) that calculates and
returns the factorial of a number provided by the user. */
#include <iostream>
using namespace std;
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is: "<<factorial(n)<<endl;
}
