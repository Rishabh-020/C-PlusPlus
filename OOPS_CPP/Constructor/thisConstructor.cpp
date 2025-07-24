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
    
    return 0;
}