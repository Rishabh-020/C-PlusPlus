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
    int hundred=0,fifty=0,twenty=0;
    switch(1){
        case 1:
        hundred=num/100;
        num=num-(hundred*100);
        case 2:
        fifty=num/50;
        num=num-(fifty*50);
        case 3:
        twenty=num/20;
        num=num-(twenty*20);
    }
    cout<<hundred<<' '<<fifty<<" "<<twenty<<" "<<num;
    return 0;
}