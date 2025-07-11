#include<iostream>
using namespace std;
int evenDigits(int n)
{
    if(n<=0){
        return 0;
    }
    if((n%10)%2==0)
    return   evenDigits(n/10)*10+(n%10);
    else
        return evenDigits(n/10);
}
int main(){
    int num;
    cin>>num;
    cout<<evenDigits(num);
    // while(num%2==0){
    //     cout<<2<<" ";
    //     num/=2;
    // }
    // for(int i=3;i<=num;i++){
    //     if(num%i==0){
    //         cout<<i<<" ";
    //         num/=i;
    //     }
    // }
    return 0;
}