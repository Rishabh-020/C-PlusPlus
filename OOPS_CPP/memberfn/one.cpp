#include<iostream>
using namespace std;
class member{
public:
    string name;
    int age;
    void display(){
        cout<<name<<endl<<age<<endl;
    }
    member(){

    }
    member(string str,int num){
        name=str;
        age=num;
    }
    member add(member m2);
    
    // {
    //     member m1;
    //     m1.age=age+m2.age;
    // }
};
member assign(){
    member s1;
    s1.name="hello";
    s1.age=12;
    return s1;
}
member member::add(member m2){
        member m1;
        m1.age=age+m2.age;
        m1.name=name+" "+m2.name;
        return m1;
}
int main(){
    // member m1=assign();
    // m1.display();
    member m1("name1",12);
    member m2("name2",21);
    member m3= m1.add(m2);
    m3.display();
    return 0;
}