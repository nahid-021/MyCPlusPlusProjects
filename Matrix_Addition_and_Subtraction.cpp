
/* Matrix Addition and Subtraction
Write a program to input two 3x3 matrices
and perform addition and subtraction.
Display the results in a matrix format. */
#include <iostream>
using namespace std;
int main()
{
    int r,c;  //take 3x3
    cout<<"Enter rows and column: ";
    cin>>r>>c;
    int arr1[r][c],arr2[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr1[i][j]>>arr2[i][j];
        }
    }
    cout<<"matrix1: "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr1[i][j]<<" ";
        }cout<<endl;
    }
    cout<<"matrix2: "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr2[i][j]<<" ";
        }cout<<endl;
    }
    int addition[r][c];
    cout<<"Addition: "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            addition[i][j]=arr1[i][j]+arr2[i][j];
            cout<<addition[i][j]<<" ";
        }cout<<endl;
    }

    int subtraction[r][c];
    cout<<"Subtraction: "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            subtraction[i][j]=arr1[i][j]-arr2[i][j];
            cout<<subtraction[i][j]<<" ";
        }cout<<endl;
    }
}
