#include<iostream>
using namespace std;
class soccor{ // Parnet class 1
public:
    int totalGoal;
    int ranking;
};
class doctor{ // Parent class 2
public:
    string speciality;
    float experince;
    string degree;
};
class Top:public soccor,public doctor{// Inherit both  parent class 1 and 2
public:
    int everything;
};
int main(){
    Top t1;
    t1.degree="MBBS";
    t1.speciality="Segeon";
    t1.totalGoal=340;
    return 0;
}