/* Rectangle Operations
Define a class Rectangle with private fields for length and
width. Implement methods to set dimensions, calculate the area,
and calculate the perimeter. Use the class in a program to
display the area and perimeter for a given rectangle. */
#include <iostream>
using namespace std;
class Rectangle
{
private:
    float length;
    float width;
public:
    void input(){
        cout<<"Enter length: ";
        cin>>length;
        cout<<"Enter width: ";
        cin>>width;
    }
    void area(){
        cout<<"Area : "<<length*width<<endl;
    }
    void perimeter(){
        cout<<"Perimeter: "<<2*(length*width)<<endl;
    }
};
int main()
{
    Rectangle rectangle;
    rectangle.input();
    rectangle.area();
    rectangle.perimeter();
}
