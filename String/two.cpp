#include<iostream>
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
    int binary=0;
    for(int i=len-1;i>=0;i--){
        binary=binary*10+arr[i];
    }
    return binary;
}
int main(){
    // int a=1;
    // int b=a++;
    // int c=++a;
    // cout<<a<<" "<<b<<" "<<c;
    int num;
    cin>>num;
    cout<<toBinary(num);
}