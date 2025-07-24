#include<iostream>
using namespace std;
class Person{
private:
    string name;
    int age;
    string country;
public:
    void input(){
        cin>>name>>age>>country;
    }
    void assign(Person* p){
        name=p->name;
        age=p->age;
        country=p->country;
    }
    void output(){
        cout<<"The name of the person is: "<<name<<endl<<"His/Her age is: "<<age<<endl<<"He/She is from "<<country;
    }
};
class Bank{
    int accountNumber=10245;
    int balance=0;
    public:
        void deposit(int value,int account){
            balance+=value;
        }
        int withdraw(int amount,int account){
            if(account!=accountNumber){
                cout<<"Invalid Account Number";
                return 0;
            }
            if(balance<amount){
                cout<<"Invalid Amount to Withdraw";
                return 0;
            }else{
                cout<<"Amount withdrawn"<<endl;
                cout<<"The remain amount is:"<<-amount+balance;
            }
        }
};
class Date{
private:
    int date;
    string month;
    int year;
public:
    void set_Date(int d){
        date=d;
    }
    void set_month(string m){
        month=m;
    }
    void set_year(int y){
        year=y;
    }
    void get(){
        if(date<=31 && (month=="January"|| month=="March"|| month=="May"|| month=="July"
            || month=="August"|| month=="October"|| month=="December"))
        cout<<date<<" "<<month<<" "<<year;
        else if (date <= 30 && (month == "April" || month == "June" || month == "September" 
            || month == "November"))
        cout<<date<<" "<<month<<" "<<year;
        else if(date<=29 && month=="February")
        cout<<date<<" "<<month<<" "<<year;
        else cout<<"Invalid Input!";
    }
};
class Dynamic{
public:
    string name;
    int rollNum;
    void get(){
        cin>>name>>rollNum;
    }
    void out(){
        cout<<name<<" "<<rollNum<<endl;
    }
};
class Pointer{
public:
    string name;
    void changename(string str){
        name=str;
    }
    void display(){
        cout<<name<<endl;
    }
};
void modify1(Pointer p){// Pass by value
    p.changename("boob");
}
void modify2(Pointer &p){// By reference
    p.changename("boob");
}
void modify3(Pointer *p){// By pointer
    p->changename("nom");
}
int main(){
    Pointer p1;
    p1.name="hello";
    modify1(p1);
    p1.display();
    modify2(p1);
    p1.display();
    modify3(&p1);
    p1.display();
    // Date d1;
    // d1.set_Date(30);
    // d1.set_month("February");
    // d1.set_year(2025);
    // d1.get();
    // Person p1;
    // p1.input();
    // p1.assign(&p1);
    // p1.output();
}