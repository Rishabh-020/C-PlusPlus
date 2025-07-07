#include<iostream>
using namespace std;
// class power{
// public:
//     bool isPower(int num){
//         if(num<=0)return false;
//         while(num%2==0){
//             num=num>>1;
//         }
//         return num==1;
//     }
// };
//Slove the question to find how many number of notes of hundred,fifty,twenty,one are req to get the value(num)
int main(){
    int num;
    cin>>num;
    // power p;
    // cout<<p.isPower(num);
    switch(num){
        int hundred=num%100;
        int fifty=(num-(hundred*100))%50;
        int twenty= (num-)
    }
    return 0;
}