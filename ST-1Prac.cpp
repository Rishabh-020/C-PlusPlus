#include<iostream>
#include <iomanip>
#include<string>
using namespace std;
int equivalent(int num){
    int val=1,count=0,power=1;
    while(num>0){
        int n=num%10;
        val=power;
        count+=(val*n);
        power*=2;
        num/=10;
    }
    return count;
}
int countVowel(string str){
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
    }
    return count;
}
int rev(string &str,int num1,int num2){
    while(num1<num2){
        char temp=str[num1];
        str[num1]=str[num2];
        str[num2]=temp;
        num1++;
        num2--;
    }
}
int reverseWord(string &str){
    int space=1,start=0,end=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '|| str[i]==str.length()-1){
            rev(str,start,i-1);
            start=i+1;
        }
    }
}
int isPrime(int num){
    if(num<=2){
        return 1;
    }
    for(int i=2;i<num/2;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int isPalindrome(string str){
    for(int i=0;i<str.length()/2;i++){
        if(str[i]==' '){
            str[i]++;
            continue;
        }
        if(str[str.length()-i-1]==' '){
            str[str.length()-i-1]--;
            continue;
        }
        if(str[i]!=str[str.length()-i-1]){
            return 0;
        }
    }
    return 1;
}
float pointerGst(float *num){
        *num=(*num)+(0.18* (*num))-(0.10* (*num));
        return *num;
}
int reverseEachByMinus(int num){
    int count=0;
    while(num>0){
        int n=num%10;
        if(n-1<0){
            count=count*10+(n-1+10);
        }else{
            count=count*10+(n-1);
        }
        num/=10;
    }
    return count;
}
    int reverseEachByPlus(int num){
        int result=0,place=1;
        while(num > 0){
            int d = num % 10;
            // d = (d + 1) % 10;
            if(d+1>9){
                d=(d+1)-10;
            }else{
                d++;
            }
            result = d * place + result;
            place *= 10;
            num /= 10;
        }
        return result;
    }
float calculateSalary(float *num){
    *num= (*num)+((*num)*0.2)+((*num)*0.10)-((*num)*0.05);
    return *num;
}
int main(){
    int num1;
    cin>>num1;
    cout<<reverseEachByPlus(num1);
    // cout<<reverseEachByMinus(num1);
    // float num;
    // cin>>num;
    // cout<<fixed;cout.precision(2);
    // cout<<calculateSalary(&num);
//  pointerGst(&num);
//  cout << fixed << setprecision(2) << num;
    // string str;
    // getline(cin,str);
    // if(isPalindrome(str)){
    //     cout<<"Pal";
    // }   
    // reverseWord(str);
    // for(int i=0;i<str.length();i++){
    //     cout<<str[i];
    // }
    // cout<<countVowel(str);
    // if(isPrime(num)){
    //     cout<<"Prime";
    // }else{
    //     cout<<"Not";
    // }
    // cout<<equivalent(num);
}