/* 13. Write a program to find all prime numbers between 1 and a user-specified number n.*/
#include <iostream>
using namespace std;
int main(){
 int i,n,j;
 cout<<"limit: ";
 cin>>n;
 for(i=1; i<=n; i++)
 {
     for(j=2; j<i; j++)
     {
         if(i%j == 0)
         break;
     }
     if(j==i)
     {
         cout << i <<endl;
     }
 }
}
