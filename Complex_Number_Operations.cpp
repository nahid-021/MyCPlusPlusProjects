/* Complex Number Operations
Define a structure Complex with fields for the real and
imaginary parts of a complex number.
Write a program to add and subtract two complex numbers. */
#include <iostream>
using namespace std;

// Define the Complex structure
struct Complex {
    double real;
    double imag;

    // Function to input complex numbers
    void input() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    // Function to add two complex numbers
    Complex add(Complex c) {
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }

    // Function to subtract two complex numbers
    Complex subtract(Complex c) {
        Complex result;
        result.real = real - c.real;
        result.imag = imag - c.imag;
        return result;
    }

    // Function to display a complex number
    void display() {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
        cout << endl;
    }
};

int main() {
    Complex num1, num2, sum, difference;

    // Input complex numbers
    cout << "For the first complex number:" << endl;
    num1.input();

    cout << "For the second complex number:" << endl;
    num2.input();

    // Performing addition and subtraction
    sum = num1.add(num2);
    difference = num1.subtract(num2);

    // Displaying results
    cout << "Sum: ";
    sum.display();

    cout << "Difference: ";
    difference.display();

    return 0;
}


