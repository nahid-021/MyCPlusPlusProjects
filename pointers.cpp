#include <iostream>
using namespace std;
int main()
{
    string name = "Nahid";
    int age = 21;

    string *pName = &name;
    int *pAge = &age;

    cout<<*pName<<'\n';
    cout<<*pAge;
}
