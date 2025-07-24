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
    student *ptr=&s1;
    Print(s1);
    ptr->name = "ne"; // this is same as writing (*ptr).name
    cout<<ptr->name<<" "<<ptr->age<<" "<<ptr->avg<<endl;
    ptr->name="new name";
    Print(s1);
    int *new_ptr=new int(132); // this intger is assigned in the run time 
    // Like the value of the int is  initialized to new_ptr during the run time
    return 0;
}