/* 11. Take a double input representing a number and convert it to an integer.
Perform an arithmetic operation (e.g., add 10) and display the result. */
#include<iostream>
using namespace std;
int main() {
    double a;
    cout<<"Enter a value: ";
    cin>>a;
    int result=int(a)+10;
    cout<<"Display the result: "<<result;
}
