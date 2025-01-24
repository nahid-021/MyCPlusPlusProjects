/* Transpose of a Matrix
Create a program to find the transpose of a 4x4 matrix.
Display the original and transposed matrices. */
#include <iostream>
using namespace std;
int main()
{
    int arr1[4][4],arr2[4][4];
    cout<<"Enter matrix 1: ";
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter matrix 2: ";
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>>arr2[i][j];
        }
    }
    cout<<"matrix1 :"<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<arr1[i][j]<<" ";
        }cout<<endl;
    }
    cout<<"matrix2 :"<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<arr1[i][j]<<" ";
        }cout<<endl;
    }
    cout<<"Transpose of matrix1 :"<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<arr1[j][i]<<" ";
        }cout<<endl;
    }
    cout<<"Transpose of matrix2 :"<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<arr1[j][i]<<" ";
        }cout<<endl;
    }
}
