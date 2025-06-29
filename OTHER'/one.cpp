#include<iostream>
#include<vector>
using namespace std;
int countDigit(int num){
    int count=0;
    while(num>0){
        int N=num%10;
        count+=N;
        num/=10;
    }
    return count;
}   
int countLen(int num){
    int len=0;
    while(num>0){
        ++len;
        num/=10;
    }
    return len;
} 
int fact(int num){
    int cal=1;
    for(int i=1;i<=num;i++){
        cal*=i;
    }
    return cal;
}  
int combination(int num1,int num2){
    return fact(num1)/(fact(num2)*fact(num1-num2));
}
int pascalTriangle(int num){
    for(int i=0;i<num;i++){
        for(int j=0;j<num-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int num1,num2;
    cin>>num1;
    int arr[]={76,877};
    // int new_arr[num1]=arr;
    // vector<int>vec;
    // pascalTriangle(num1);
    // for(int i=1;i<=num1;i++){
    //     for(int j=1;j<=num1;j++){
    //         if(i==j||(i+j-1)==num1){
    //             cout<<'*';
    //         }else{
    //             cout<<" ";
    //         }
            // if(i==1||j==1||j==num1||i==num1)cout<<"*";
            // else cout<<" ";
        // }cout<<"\n";
    // }
    // char ch='a';
    // cin>>ch;
    // while(ch<='z'){
    //     cout<<(int)ch<<" "<<ch<<endl;
    //     ch++;
    // }
    // cout<<"The len of the entered number is:"<<countLen(num1)<<endl;
    // cout<<"The sum of the digit of the entered number is:"<<countDigit(num1)<<endl;
    // for(int i=0;i<num1;i++){
    // }
    // do{
    //     cout<<num1<<" ";
    //     num1--;
    // }while(num1>0);
    // for(int i=1;i<=100000;i++){
    //     cout<<num1<<" * "<<i<<" = "<<num1*i<<endl;
    // }
    // char ch;
    // cin>>ch;
    // switch(ch){
    //     case '+':
    //     cout<<num1+num2;
    //     break;
    //     case '-':
    //     cout<<num1-num2;
    //     break;
    //     case '*':
    //     cout<<num1*num2;
    //     break;
    //     case '/':
    //     cout<<(float)num1/num2;
    //     break;
    //     case '%':
    //     cout<<num1%num2;
    //     break;
    // }
    // cout<<num1/(float)num2;
    // if(num1 != num2)
    // cout<<"Not";
    // else
    // cout<<"Yes";
    // while(num2>0){
    //     int temp=num2;
    //     num2=num1%num2;
    //     num1=temp;
    // }
    // cout<<num1;
    // float num1,num2;
    // cout<<"This is good\n";
    // cin>>num1>>num2;
    // cout<<num1<<endl<<num2<<endl;
    // cout<<"The number entered is:"<<num1/num2<<endl;
}