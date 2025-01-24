#include <iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;

public:
    Person()
    {
        cout<<"Default constructor: "<<endl;
    }
    Person(string setName, int setAge)
    {
        name=setName;
        age=setAge;
    }
   /* void getName(string newName)
    {
        name=newName;
    }
    string setName()
    {
        return name;
    }
    void getAge(int newAge)
    {
        age=newAge;
    }
    int setAge()
    {
        return age;
    } */
    void displayInfo()
    {
        cout<<"Name: "<<name<<", Age: "<<age<<endl;
    }
};
int main()
{
    Person person1("Alice",30);
    person1.displayInfo();
    Person person2("Bob",20);
    person2.displayInfo();
}
