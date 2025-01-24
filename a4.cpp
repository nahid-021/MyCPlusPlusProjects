/* 4. Write a program to input an
array of integers
(size specified by the user)
and find the maximum
and minimum values in the array. */
#include <iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Size: ";
  cin>>n;
  cout<<"Enter values of "<<n<<" arrays: "<<endl;
  int arr[n];
  for(int i=0; i<n; i++)
  {
     cin>>arr[i];
  }
  int maxi=arr[0];
  int mini=arr[0];
  for(int i=1; i<n; i++)
  {
      if(arr[i]>maxi)
    {
        maxi=arr[i];
    }
  if(arr[i]<mini)
  {
      mini=arr[i];
  }
  }
  cout<<"Maximum: "<<maxi<<endl;
  cout<<"Minimum: "<<mini<<endl;
}
