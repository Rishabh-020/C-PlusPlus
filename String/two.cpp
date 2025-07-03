#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int toBinary(int num){
    int temp=num,len=0;
    while(temp>0){
        ++len;
        temp/=2;
    }
    int arr[len],i=0;
    while(num>0){
        arr[i++]=num%2;
        num/=2;
    }
    int binary=0,j=0;
    for(int i=len-1;i>=0;i--){
        binary=binary*10+arr[i];
    }
    // while(num>0){
    //     int N=num&1;
    //     binary=(N*pow(10,j++))+binary;
    //     num=num>>1;
    // }
    return binary;
}
int negBinary(int num){
    int temp=(-num),count=0;
    while (temp>0){
        int N=!(temp&1);
        count=(count*10)+N;
        temp=temp>>1;
    }
    return count;    
}
int main(){
    // int a=1;
    // int b=a++;
    // int c=++a;
    // cout<<a<<" "<<b<<" "<<c;
    int num;
    cin>>num;
    if(num<0){
        cout<<negBinary(num);
        return 0;
    }
    cout<<toBinary(num);
}