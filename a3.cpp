/*3. Write a program to calculate
the sum of all even numbers between 1
and a user- specified number n.*/
#include <iostream>
using namespace std;
int main()
{
 int n;
 cout<<"Specified number n: ";
 cin>>n;
 int sum=0;
 for(int i=2; i<=n; i+=2)
 {
     sum=sum+i;
 }
   cout<<"Sum: "<<sum<<endl;
}
