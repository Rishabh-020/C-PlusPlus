#include<iostream>
using namespace std;
class Car{
public:
    string name;
    int num;
    float averga;
    friend void set_data(Car &c,string s,int i,float a);
    friend void get_data(Car &c);
};
void set_data(Car &c,string s, int i, float a){
    // Car c;
    c.name=s;
    c.num=i;
    c.averga=a;
}
void get_data(Car &c){
    cout<<"Name: "<<c.name;
}
int main(){
    Car c1;
    set_data(c1,"hello", 123, 24.45);
    get_data(c1);
}