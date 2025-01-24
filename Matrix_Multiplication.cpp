/* Matrix Multiplication
Implement a program to multiply two matrices (3x2 and 2x3).
Display the resulting matrix. */
#include <iostream>
using namespace std;
int main()
{
    int arr1[3][2],arr2[2][3];
    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cin>>arr2[i][j];
        }
    }
    cout<<"Matrix 1: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cout<<arr1[i][j]<<" ";
        }cout<<endl;
    }
    cout<<"Matrix 2: "<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout<<arr2[i][j]<<" ";
        }cout<<endl;
    }
    int result[3][3]={0};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<2; k++){
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    cout<<"matrix multiplication: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}
