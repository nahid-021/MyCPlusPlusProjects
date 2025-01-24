/*12. Write a C++ program to replace specific elements in an array
based on a given condition. The program should: Allow the user to
input the size of the array (positive integer),
accept the elements of the array from the user,
replace all elements at even indices with the value 0 if the element is greater than 10 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Size: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter array "<<i<<": ";
        cin >> arr[i];
    }
    for (int i=0; i<n; i++)
    {
        if (i % 2 == 0 && arr[i] > 10)
        {
            arr[i] = 0;
        }
    }
    cout << "Modified array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

