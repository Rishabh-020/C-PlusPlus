#include<iostream>
using namespace std;
int main(){
    int num,count=0,power=1;
    std::cin>>num;
    while(num>0){
        int N=num%10;
        // int N=num&1;
        count+=(N*power);
        power*=2;
        num/=10;
    }
    cout<<count;
    return 0;
}