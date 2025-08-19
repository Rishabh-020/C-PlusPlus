#include<iostream>
using namespace std;
class inherit{
public:
    int num;
    float score;
    void showBase(){
        cout<<"This is a base"<<endl;
    }
};
class child:public inherit{
public:
    string name;
    int val;
    void showChild(){
        cout<<"This is a child"<<endl;
    }
};
class Pass{
public:
    int num1,num2;
    const int notChange;
    void display() const{
        cout << "Name: " << num1 << ", Roll No: " << num2 << endl;
    }
};
void passConst(const Pass& c){
    c.display();
}
int main(){
    // inherit *base;
    // child c;
    // base=&c;
    // base->showBase();
    // c.showChild();
    Pass p1={12,23};
    passConst(p1);

}