#include<iostream>
using namespace std;
class BankAccount{
public:
    string accountHolder;
    int accountNumber;
    double balance;
    static int totalAccount;
    BankAccount(){
        
    }
    BankAccount(string name,int number,int bal){
        accountHolder=name;
        accountNumber=number;
        balance=bal;
        totalAccount++;
    }
    void deposit(double balance){
        this->balance+=balance;
    }
    void withDraw(double amount){
        if(amount<balance){
            balance-=amount;
        }
    }
    void display(){
        cout<<"Name: "<<accountHolder<<" AccNumber: "<<accountNumber<<" Balance: "<<balance<<endl;
    }
    void fill(string name,int age,double sal){
        accountHolder=name;
        accountNumber=age;
        balance=sal;
        totalAccount++;
    }
    static void displayTotalAccounts();
};
int BankAccount::totalAccount;
void BankAccount::displayTotalAccounts() {
    cout<<totalAccount;
}
int main()
{
    BankAccount b[3];
    for(int i=0;i<3;i++){
        BankAccount b[i];
    }
    for(int i=0;i<3;i++){
        string name;
        int age,sal;
        cin>>name>>age>>sal;
        b[i].fill(name,age,sal);
    }
    // BankAccount b1("Alice",1001,12000);
    // BankAccount b2("Vallice",1002,52000);
    // BankAccount b3("Noko",1003,22000);
    b[1].deposit(2300);
    b[2].withDraw(10000);
    for(int i=0;i<3;i++)
    b[i].display();
    BankAccount::displayTotalAccounts();
    return 0;
}