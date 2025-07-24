
#include <iostream>
using namespace std;
class Pointer
{
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
}