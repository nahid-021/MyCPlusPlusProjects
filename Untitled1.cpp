#include <iostream>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cin>>arr[i][j];
        }
    }
    int row1sum=0, row2sum=0, column1sum=0, column2sum=0;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
                if(i==0){
                    row1sum+=arr[i][j];
                }
                if(i==1){
                    row2sum+=arr[i][j];
                }
                if(j==0){
                    column1sum+=arr[i][j];
                }
                if(j==1){
                    column2sum+=arr[i][j];
                }
        }
    }
                cout<<"row1sum: "<<row1sum<<endl;
                cout<<"row2sum: "<<row2sum<<endl;
                cout<<"column1sum: "<<column1sum<<endl;
                cout<<"column2sum: "<<column2sum<<endl;

}
    /*int r,c;
    cout<<"Enter row and column: ";
    cin>>r>>c;
    int arr[2][2],sum=0;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cin>>arr[i][j];
            sum+=arr[i][j];
            }
    }
    cout<<"Sum: "<<sum;
    int firstwo=0, lastwo=0;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            if(i==0 && (j==0 || j==1)){
                firstwo+=arr[i][j];
            }
            if(i==r-1 && (j==c-2 || j==c-1)){
                lastwo+=arr[i][j];
            }
        }
    }
    cout<<" first two: "<<firstwo<<" last two: "<<lastwo;
} */
