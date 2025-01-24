#include <iostream>
using namespace std;
int main()
{
    int n[6],even,odd;
    for (int i=0;i<3;i++)
    {
        cout<<"Enter the even numbers["<<i<<"]:  "<<endl;
        cin>>n[i];
        cout<<"Enter the odd numbers["<<i<<"]:  "<<endl;
        cin>>n[i];
    }
    even=n[0]*n[2]*n[4];
    odd=n[1]*n[3]*n[5];
    cout<<"multiplication of even number: "<<even<<endl;
    cout<<"Multiplication of odd numbers:  "<<odd<<endl;
    if(even%5==0)
    {
        cout<<"even is dividable by 5"<<endl;
    }
    else
    {
        cout<<"even is not dividable by 5"<<endl;
    }
    if(odd%5==0)
    {
        cout<<"odd is dividable by 5"<<endl;
    }
    else
    {
        cout<<"odd is not dividable by 5"<<endl;
    }
}
