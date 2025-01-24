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
        cout<<"Integer["<<i+1<<"]: ";
        cin>>arr[i];
    }
    int h=0;
    for(int i=0; i<n; i++)
    {
         if(arr[i]>h)
        {
            h=arr[i];
        }
    }
    cout<<"Highest: "<<h<<endl;
}
