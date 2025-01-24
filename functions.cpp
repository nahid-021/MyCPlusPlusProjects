#include <iostream>

using namespace std;
struct Book
{
    string name;
    string author;
    string type;
    void getDetails()
    {
        cout<<"New Book Title : ";
        cin>>name;
        cout<<"New Book Author : ";
        cin>>author;
        cout<<"New Book Type : ";
        cin>>type;
    }
    void displayInfo()
    {
        cout<<"Book Title : "<<name<<endl;
        cout<<"Book Author: "<<author<<endl;
        cout<<"Book Type : "<<type<<endl;
    }
};
int main()
{
    int n;
    cout<<"To add a book in book List Enter 1\nTo see book list Enter 2\nTo delete a book from book List Enter 3\nTo Exit Enter 0"<<endl<<endl;
    cout<<"Enter Your Choice: ";
    cin>>n;
    Book book1;
    Book book2;
    if(n==1)
    {
        book1.getDetails();
        cout<<"New Book is added"<<endl;
    }
    cout<<"Enter Your Choice: ";
    cin>>n;
    if(n==1)
    {
        book2.getDetails();
        cout<<"New Book is added"<<endl;
    }
    cout<<"Enter Your Choice: ";
    cin>>n;
    if(n==2)
    {
        cout<<"********************BOOKLIST********************"<<endl;
        book1.displayInfo();
        book2.displayInfo();
        cout<<"************************************************"<<endl;
    }
    cout<<"Enter Your Choice: ";
    cin>>n;
    if(n==3)
    {
        cout<<"Which Book You want to delete form the book List? : ";
        cin>>n;
        if(n==1)
        {
            cout<<book1.name<<"  "<<book1.author<<"  "<<book1.type<<endl;
            cout<<"This is Removed form the Book List"<<endl;
        }
        if(n==2)
        {
            cout<<book2.name<<"  "<<book2.author<<"  "<<book2.type<<endl;
            cout<<"This is Removed form the Book List"<<endl;
        }
    }
    cout<<"Enter Your Choice: ";
    cin>>n;
}
