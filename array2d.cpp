#include <iostream>
using namespace std;
int main()
{
    int n , n1;
    cin>>n;
    cin>>n1;
    int arr[n][n1];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
