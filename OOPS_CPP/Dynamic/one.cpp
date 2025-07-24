#include <iostream>
using namespace std;
class Dynamic
{
public:
    string name;
    int rollNum;
    void get(){
        cin>>name>>rollNum;
    }
    void out(){
        cout<<name<<" "<<rollNum<<endl;
    }
};
int main(){
    int num=10;
    Dynamic* d=new Dynamic[num];
    for(int i=0;i<4;i++){
        d[i].get();
    }
    for(int i=0;i<4;i++){
        d[i].out();
    }
    delete[] d;
}