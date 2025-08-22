#include<iostream>
using namespace std;
class Person{
public:
    string name;
protected:
    int age;
private:
    float salary;
public:
void input(string n,int a){
    name=n;
    age=a;
}
};
class Employee:public Person{
public:
    void display(){
        cout<<name<<" "<<age;
    }
};
int main(){
    Employee emp;
    emp.input("one",12);
    emp.display();
}