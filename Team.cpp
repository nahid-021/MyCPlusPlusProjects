#include <iostream>
using namespace std;
int main() {
    int n,count = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        int sure = 0;
         for(int j=0; j<3; j++){
            int o;
            cin>>o;
            sure += o;
            }
            if(sure>=2){
                count++;
         }
    }
    cout<<count;
}
