#include<iostream>
using namespace std;
class obj{
public:
    int num;
    string name;
    const float marks=0.0;
    obj(){
        // marks=12;
        num=1;
    };
    obj(int val): num(val){};
    void display(){
        cout<<"This is not a constant function"<<endl;
    }
    void call() const{
    cout<<"Age of "<<name<<" is "<<num<<endl;
    }
    void object(const obj &o);
};
void obj:: object(const obj& o){
    o.call();
}
int main(){
    int num;
    obj o1(12);
    const obj o2;
    o2.call();
    o1.display();
    o1.call();
    return 0;
}