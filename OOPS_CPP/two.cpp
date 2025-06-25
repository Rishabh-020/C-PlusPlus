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
    void Print(string name){
        cout<<name<<" "<<this->age<<" "<<this->avg<<endl;
    }
};
void Print(student s)
{
    cout << s.name << " " << s.age << " " << s.avg << endl;
}
int main()
{
    student s1("hello",12,13.3);
    s1.Print("help");
    cout<<s1.name<<endl;
    // Print(s1);
    s1.name="changed";
    Print(s1);
    return 0;
}