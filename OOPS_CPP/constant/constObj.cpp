#include<iostream>
using namespace std;
class obj{
public:
    int num;
    string name;
    obj(){};
    obj(int val): num(val){};
    void call() const{
    cout<<"Age of "<<name<<" is "<<num;
}
};
void object(const obj& o){
    o.call();
}
int main(){
    int num;
    obj o1(12);
    o1.call();
    return 0;
}