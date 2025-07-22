#include<iostream>
using namespace std;
class library{
public:
    static int totalbook;
    library(){
        totalbook++;
    }
};
int library::totalbook=0;
class staticObj{
public:
    static int count;
    void call(){
        count++;
    }
};
int staticObj::count=0;
void obj(){
    static staticObj o1;
    o1.call();
}
int main(){
    cout<<"First time called: "<<endl;
    obj();cout<<endl;
    cout << "Secound time called: " << endl;
    obj();cout<<endl;
    cout << "Third time called: " << endl;
    obj();cout<<endl;
    cout << "Forth time called: " << endl;
    obj();cout<<endl;

    cout<<staticObj::count; /*This is the other method to print the static count variable
    to know how many times it is called */
    // library l1,l2,l3;
    // cout<<l1.totalbook; /* this is one method to call or print the count variable which is static in nature*/

    return 0;
}