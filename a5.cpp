/* 5. Create a program that takes
an array of integers as input and
prints the array in reverse order.*/
#include <iostream>
using namespace std;
int main()
{
   int n;
   cout<<"n: ";
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++)
   {
       cout<<"Enter the number: ";
       cin>>arr[i];
   }
   for(int i=n-1; i>=0; i--)
   {
       cout<<"reverse array: "<<arr[i]<<endl;
   }
}
