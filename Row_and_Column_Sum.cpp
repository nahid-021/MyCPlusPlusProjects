/* Row and Column Sum
Write a program to calculate the sum of each row and
column of a 2D array (5x5 matrix)
and display the results. */
#include <iostream>
using namespace std;
int main()
{
    int arr[5][5];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The matrix: "<<endl;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    for(int i=0; i<5; i++){
        int rowsum=0;
        for(int j=0; j<5; j++){
            rowsum+=arr[i][j];
        }cout<<"Rowsum["<<i+1<<"]: "<<rowsum<<endl;
    }
    for(int j=0; j<5; j++){
        int columnsum=0;
        for(int i=0; i<5; i++){
            columnsum+=arr[i][j];
        }
        cout<<"Column sum["<<j+1<<"]: "<<columnsum<<endl;
    }
}
