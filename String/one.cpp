#include<iostream>
using namespace std;
int main(){
    // string str;
    // getline(cin,str);
    // cout<<str;
    // for(int i=0;i<str.length();i++){
    //     cout<<str[i];
    // }
    // return 0;
    int num1,num2;
    cin>>num1>>num2;
    int y=num1>>(num2),x=num1^num2;

    cout<<y<<" "<<x;
}