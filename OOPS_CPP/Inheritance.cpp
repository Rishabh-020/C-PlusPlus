#include<iostream>
using namespace std;
class scoty{
public:
    int name;
    int milege;
private:
    int bootspace;
};
class bike:public scoty{
public:
    int gear;
};
int main(){
    bike b1;
    b1.gear=14;
    b1.milege=23;
    return 0;
}