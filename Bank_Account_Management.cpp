/* Bank Account Management
Create a class BankAccount with private members
for account number, holder name, and balance.
Write methods to deposit, withdraw, and display account details.*/

#include <iostream>
using namespace std;
class BankAccount
{
private:
    int account_number;
    string name;
    int balance;
public:
    BankAccount(int newAnum,string newName, int newBalance)
    {
        account_number=newAnum;
        name=newName;
        balance=newBalance;
    }
    void deposit()
    {
        int n;
        cout<<"\nHow much money you want to deposit: ";
        cin>>n;
        balance=balance+n;
        cout<<"After deposit: "<<balance<<endl;
    }
    void withdraw()
    {
        int n;
        cout<<"\nHow much money you want to withdraw: ";
        cin>>n;
        if(balance>n){
            balance=balance-n;
            cout<<"After withdraw: "<<balance<<endl;
        }
        else{
            cout<<"Don't have enough money."<<endl;
        }
    }
    void displayInfo()
    {
        cout<<"\nAccount Number: "<<account_number<<endl<<"Name: "<<name<<endl<<"Balance: "<<balance<<endl;
    }
};
int main()
{
    BankAccount member1(24590623,"Nahid",0000);

for(int i=0; i<10; i++)
{
    cout<<"\nHow can we help you today?\nFor deposit press 1.\nFor withdraw press 2.\nFor Account details press 3.\nFor Exit press 4."<<endl;
    cout<<"Your choice: ";
    int n;
    cin>>n;
        if(n==1)
            {
                member1.deposit();
            }
        if(n==2)
            {
                member1.withdraw();
            }
        if(n==3)
            {
                member1.displayInfo();
            }
        if(n==4)
            {
                break;
            }
}
}
