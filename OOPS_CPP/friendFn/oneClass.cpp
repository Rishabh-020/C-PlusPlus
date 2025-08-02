#include<iostream>
using namespace std;
class display;
class Friend{
public:
    int length;
    int bredth;
    int height;
    Friend(int l,int b,int h) : length(l),bredth(b),height(h) {} 
friend class display;
};
class display{
public:
    void print(Friend f){
        cout<<"length: "<<f.length<<" "<<f.bredth;
    }
};
int main(){
    Friend f1(10,20,30);
    display d1;
    d1.print(f1);
}