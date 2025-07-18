#include<iostream>
using namespace std;
class Student {
private:
    int rollNum;
    string name;
    float arr[3];
public:
    void inputDetails(){
        cin>>rollNum>>name;
        for(int i=0;i<3;i++)cin>>arr[i];
    }
    float calculateTotal(){
        float sum=0.0;
        for(int i=0;i<3;i++){
            sum+=arr[i];
        }
        return sum;
    }
    float calculateAverage(){
        float sum=0.0;
        for(int i=0;i<3;i++){
            sum+=arr[i];
        }
        return sum/3;
    }
    void displayDetails(){
        cout<<"Roll Number: "<<rollNum<<endl<<"Name: "<<name<<endl;
        cout<<"Total Marks: "<<calculateTotal()<<endl<<"Avergae Marks: "<<calculateAverage();
    }
};
int main(){
    Student s1;
    s1.inputDetails();
    s1.displayDetails();
}
