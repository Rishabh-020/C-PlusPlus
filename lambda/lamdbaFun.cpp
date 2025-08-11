#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3,num4;cin>>num1>>num2>>num3>>num4;
    auto func = [](int num1,int num2)
    {
        while(num2>0){
            int temp = num2;
            num2 = num1 % num2;
            num1 = temp;
        }
        cout<<num1<<endl;
        cout << "hello world" << endl;
    };
    func(num1,num2);
    func(num3,num4);
    return 0;
}