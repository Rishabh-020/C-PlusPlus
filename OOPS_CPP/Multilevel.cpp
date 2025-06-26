#include<iostream>
using namespace std;
class Car{ // Parent top most 
public:
    int name;
    int milege;
};
class scoty: public Car{ //inherit parent top 
public:
    int name;
    int milege;
};
class bike:public scoty{ // grand child this structure is for multilevel
public:
    int gear;
};
int main(){
    bike b1;
    b1.gear=14;
    b1.milege=23;
    return 0;
}