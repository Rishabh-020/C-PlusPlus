#include<iostream>
using namespace std;
int score;
class Check{
public:
    int age;
    void outside();
};
class Student {
  private:
    string name;
    int rollNo;
  public:
  Student(){}
    Student(string n, int r) : name(n), rollNo(r) {}

    friend void displayStudent(Student s);
    void displayOut(Student *s);
};
void Student::displayOut(Student *s){
    s->name="noice";
    cout << "Name: " << s->name << ", Roll No: " << s->rollNo << endl;
}
void displayStudent(Student s) {
    cout << "Name: " << s.name << ", Roll No: " << s.rollNo << endl;
}
void Check::outside(){
    cout<<"This is the function which is outside the class"<<endl;
}
int main(){
    Student s1;
    Student s2("naman",398);
    displayStudent(s2);
    s2.displayOut(&s2);
    displayStudent(s2);
    // Check c1;
    // c1.outside();
    // int score;
    // cin>>::score>>score;
    // cout<<"Global: "<<::score<<endl<<"Local: "<<score;
    return 0;
}