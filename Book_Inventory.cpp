/* Book Inventory
Define a structure Book with fields
for title, author, and price. Write a program to input and
display the details of books priced above 500. */
#include <iostream>
using namespace std;
struct Book
{
    string title;
    string author;
    int price;

    void getInfo()
    {
        cout<<"Books title: ";
        cin>>title;
        cout<<"Books author: ";
        cin>>author;
        cout<<"Books price: ";
        cin>>price;
    }
    void displayInfo()
    {
        if(price>500)
        {
            cout<<"Books title: "<<title<<endl;
            cout<<"Books author: "<<author<<endl;
            cout<<"Books price: "<<price<<endl;
        }
        else
        {
            cout<<"price is not above 500."<<endl;
        }
    }
};
int main()
{
    Book book1;
    book1.getInfo();
    book1.displayInfo();
}
