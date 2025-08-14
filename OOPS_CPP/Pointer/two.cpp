#include<iostream>
using namespace std;
class Check{
public:
    string name;
    int age;
    Check(string name,int age){
        this->name=name;
        this->age=age;
    }
    int display(const Check &c){
        // return this;
        cout<<c.name+" "+name;
    }
};
int main(){
    Check c1("helo",12);
    Check c2("bye",23);
    c1.display(c2);
}