/* 6. Write a program to check if a given number is an Armstrong number.
(Hint: An Armstrong number is a number where the sum of the cubes of its
  digits equals the number itself, e.g., 153 = 13 +53 +33) */
#include <iostream>
using namespace std;
int main()
{
    int number, temp, digits = 0;
    cout << "Enter a number: ";
    cin >> number;
    temp = number;
    int digitArray[10];
    for (int i = 0; temp > 0; i++)
        {
        digitArray[i] = temp % 10;
        temp /= 10;
        digits++;
        }
    int armstrongSum = 0;
    for (int i = 0; i < digits; i++)
    {
        int digitPower = 1;
        for (int j = 0; j < digits; j++)
        {
            digitPower *= digitArray[i];
        }
        armstrongSum += digitPower;
    }
    if (armstrongSum == number)
    {
        cout << number << " is an Armstrong number." << endl;
    }
    else
    {
        cout << number << " is not an Armstrong number." << endl;
    }
}
