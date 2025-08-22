#include<iostream>
using namespace std;
class Person{
public:
    string name;
    static int num1;
protected:
    int age;
private:
    float salary;
public:
static void call();
void input(string n,int a){
    name=n;
    age=a;
}
};
int Person::num1=0;
void Person::call(){
    num1++;
}
class Employee:public Person{
public:
    void display(){
        cout<<name<<" "<<age<<" "<<num1;
    }
};
class Student{
public:
    string name;
    int marks;
    Student(string name,int marks){
        this->name=name;
        this->marks;
    }
    void display(){
        if(marks>=40)
        cout<<"Pass"<<endl;
        else cout<<"Fail"<<endl;
    }
};
class Rectangle{
public:
    int lenght;
    int height;
    Rectangle(int l,int h){
        lenght=l;
        height=h;
    }
    void area(){
        cout<<lenght*height<<endl;
    }
    void display(){
        cout<<lenght<<" "<<height<<endl;
    }
};
int main(){
    Student s("one",45);
    s.display();
    Rectangle r(11,29);
    r.area();
    // Employee emp;
    // emp.call();
    // emp.call();
    // emp.call();
    // emp.call();
    // cout<<Person::num1;
    // emp.input("one",12);
    // emp.display();
}