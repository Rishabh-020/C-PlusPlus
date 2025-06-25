#include<iostream>
using namespace std;
class Student{
    public:
        string name;
        int age;
        int score;
    Student(){

    }
    Student(string n,int a){
        name=n;
        age=a;
    }
    Student(string s,int n,int sc){
        name=s;
        age=n;
        score=sc;
    }
    void Print()
    {
        cout << name << " " << age << " " << score << endl;
    }
};
int main(){
    Student s1("one",1,43);
    Student s2;
    Student s3("this",23);
    s2.name="hello";
    s2.age=12;
    s2.score=234;  
    // cout<<s3.name<<" "<<s3.age<<endl;  
    s3.Print();
    s1.Print();
    return 0;
}
