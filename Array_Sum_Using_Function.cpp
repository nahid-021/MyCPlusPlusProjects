/* Array Sum Using Function
Write a function int arraySum(int arr[], int size)
that calculates and returns the sum of elements in an array.
Input the array elements from the user. */
#include <iostream>
using namespace std;
int arraySum(int arr[], int size)
{
    int sum = 0;
    for (int i=0; i<size; i++)
    {
        sum =sum+arr[i];
    }
    return sum;
}
int main()
{
    int size;
    cout<<"Enter size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter numbers: ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    int result = arraySum(arr, size);
    cout<<"Sum: "<<result<<endl;
}
