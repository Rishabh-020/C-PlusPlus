#include<iostream>
using namespace std;
int fact(int num){
    int count=1;
    for(int i=1;i<=num;i++){
        count*=i;
    }
    return count;
}
int nCr(int a,int b){
    return fact(a)/(fact(b)*fact(a-b));
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
    cout<<nCr(num1,num2);
}