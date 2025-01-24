/*10. Write a program that takes a single character as input and prints its ASCII value.*/
#include <iostream>
using namespace std;
int main()
{
    char a;
    cout << "Enter a character: ";
    cin >> a;
    cout << "ASCII value of "<<a<<" is: "<<int(a)<<endl;
}
