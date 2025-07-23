#include<iostream>
using namespace std;
class circle{
private:
    int radius;
    int ar(int radius){
        return 3.14*radius*radius;
    }
    int  per(int radius){
        return 2*3.14*radius;
    }
public:
    int val;
    int pass(){
        radius=val;
    }
    int area(){
        cout<<ar(val)<<endl;
    }   
    int perameter(){
        cout<<per(val)<<endl;
    }

};
int main(){
    circle c1;
    cin>>c1.val;
    c1.area();
    c1.perameter();
    return 0;
}