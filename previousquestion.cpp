#include <iostream>
using namespace std;
int main()
{
    float c, pre;
    cout<<"classes: "<<endl;
    cin>>c;
    cout<<"present: "<<endl;
    cin>>pre;
    float att;
    att = (pre/c)*100;
    cout<<"attendence: "<<att<<endl;
    if(att==100)
    {
        cout<<"you will get 2 marks."<<endl;
    }
    else if(att>=80)
    {
        cout<<"Allowed"<<endl;
    }
    else
        {
            cout<<"not allowed"<<endl;
        }
}
