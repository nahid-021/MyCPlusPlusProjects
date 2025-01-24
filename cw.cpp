#include <iostream>
using namespace std;
float add(float x, float y)
{
    return x+y;
}
float discount(float x,int y)
{
    return x*(y/100);
}
float vat(float x, int y)
{
    return x*(y/100);
}
int main()
{
    int x,y;
    cout<<"Enter two price: ";
    cin>>x>>y;
    cout<<"Total: "<<add(x,y)<<endl;
    float price=add(x,y);
    int z;
    cout<<"After discout: "<<discount(price,z)<<endl;
    float after_discount=discount(price,z);
    int v;
    cout<<"After Vat: "<<vat(after_discount,v);
}


/*#include <iostream>
using namespace std;
float add(float x,float y)
{
    return x+y;
}
float deduct(float x,float y)
{
    return x-y;
}
float multiply(float x,float y)
{
    return x*y;
}
float divide(float x,float y)
{
    return x/y;
}
int main()
{
    int n;
    cout<<"Choose 1 to 4 to add, deduct, multiply, divide: ";
    cin>>n;
    float x,y;
    cout<<"Enter 2 number: ";
    cin>>x>>y;
    if(n==1)
    {
        cout<<"Add: "<<add(x,y);
    }
    if(n==2)
    {
        cout<<"deduct: "<<deduct(x,y);
    }
    if(n==3)
    {
        cout<<"multiply: "<<multiply(x,y);
    }
    if(n==4)
    {
        cout<<"divide: "<<divide(x,y);
    }

} */
