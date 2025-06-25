#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    int run;
    float avg;
    student(){

    }
    student(string name,int age,float avg){
        this->name=name;
        this->age=age;
        this->avg=avg;
    }
    student(int age,float avg,string name){
        this->name=name;
        this->age=age;
        this->avg=avg;
    }
    
};
void Print(student s){
    cout<<s.name<<" "<<s.age<<" "<<s.avg<<endl;
}
int main()
{
    student s1("hello",12,13.3);
    student s2(12,32.23,"now");
    student s3;
    s3.name="elen";
    s3.age=12;
    s3.avg=5.343;
    student s4=s2; //DEEP COPY
    s4.name="changed";
    student s5(s1); //Copy constructor -Deep Copy
    Print(s1);
    Print(s2);
    Print(s3);
    Print(s4);
    Print(s5);
    return 0;
}