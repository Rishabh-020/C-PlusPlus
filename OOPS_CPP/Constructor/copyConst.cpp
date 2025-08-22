#include<iostream>
using namespace std;
class Checking{
public:
    string name;
    int age;
    float number;
    Checking(string name,int age,float number){
        this->name=name;
        this->age=age;
        this->number=number;
    }
    Checking(const Checking &c){
        name=c.name;
        age=c.age;
        number=c.number;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<number;
    }
    ~Checking(){
        cout<<endl<<"Destructed"<<endl;
    }
};
int main(){
    Checking c1("abc",12,293.3);
    Checking c2(c1);
    c2.display();

}
