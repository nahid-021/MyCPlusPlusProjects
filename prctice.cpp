#include <iostream>
using namespace std;
int main()
{
    int mat[3][3]={{1,2,3},{4,2,9}};
    int m=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(mat[i][j]>m){
                m=mat[i][j];
            }
        }
    }
    cout<<"haha: "<<m;
}
/* class BankAccount
{
private:
    int number;
    string name;
    int balance;
public:
    BankAccount(){
    }
    BankAccount(int newNumber, string newName, int newBalance){
        number=newNumber;
        name=newName;
        balance=newBalance;
    }
    void setNumber(int newNumber){
        number=newNumber;
    }
    int getNumber(){
        return number;
    }
    void setName(string newName){
        name=newName;
    }
    string getName(){
        return name;
    }
    void setBalance(int newBalance){
        balance=newBalance;
    }
    int getBalance(){
        return balance;
    }
    void displayinfo(){
        cout<<endl;
        cout<<"Account Number: "<<number<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Account Balance: "<<balance<<endl;
    }
};
int main(){
    BankAccount bankaccount1(2123,"Nahid",50000);
    bankaccount1.displayinfo();
    BankAccount bankaccount2;
    bankaccount2.setNumber(2345);
    bankaccount2.setName("mahi");
    bankaccount2.setBalance(40000);
    bankaccount2.displayinfo();
} */
