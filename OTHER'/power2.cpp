#include<iostream>
using namespace std;
class power{
public:
    bool isPower(int num){
        if(num<=0)return false;
        while(num%2==0){
            num=num>>1;
        }
        return num==1;
    }
};
int main(){
    int num;
    cin>>num;
    power p;
    cout<<p.isPower(num);
    return 0;
}