#include<iostream>
#include<string>
#include<string.h>
using namespace std;
class Student {
    private:
        string name;
        int rollNo;
        char *ch;
    public:
        Student(string n, int r) : name(n), rollNo(r) {}
        Student(const char*n){
            ch=new char[strlen(n)+1];
            strcpy(ch,n);
        }
        ~Student(){
            delete[] ch;
        }

    void display() const {  // constant function
        cout << "Name: " << name << ", Roll No: " << rollNo << endl;
    }
    void display(){
        cout<<"Not";
    }
};
class child: public Student{
    public:
        
};

int main() {
    const Student s("Alice", 101);
    s.display();  // OK: display() is const
}