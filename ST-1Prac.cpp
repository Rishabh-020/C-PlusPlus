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
int palindromeString(string str){
    int start=0,end=str.length()-1;
    while(start<=end){
        if(str[start]==' '){
            start++;
            continue;
        }if(str[end]==' '){
            end--;
            continue;
        }
        if(str[start]!=str[end]){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
int swapPointer(int *num1,int *num2){
    int temp=*num1;
    *num1=*num2;
    *num2=temp;
}
int isPrime(int num){
    if(num==1){
        return 0;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int GreaterPrime(int *num1){
    int val=0,count=0;
    for(int i=*num1+1;i<=100000;i++){
        if(isPrime(i)){
            val=i;
            break;
        }
    }
    while(val>0){
        int n=val%10;
        count+=n;
        val/=10;
    }
    return count;
}
int isFib(int num){
    if(num==0){
        return 0;
    }
    if(num=1){
        return 1;
    }
    return isFib(num-1)+isFib(num-2);
}
int GreateFib(int num){
    for(int i=num+1;;i++){
        if(isFib(i)){
            return i;
        }
    }
}
int factNormal(int num){
    if(num<=0)return 1;
    else return num*factNormal(num-1);
}
int factNormal(int *num){
    if(*num<=0)return 1;
    int temp=*num-1;
    return (*num)*factNormal(&temp);
}
int findLen(string s){
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            count=0;
        }else
        count++;
    }
    return count;
}
int PalPhrase(string str){
    string newStr="";
    int j=0;
     for(int i=0;i<str.length();i++){
        if(isalpha(str[i])){
            newStr.push_back(tolower(str[i]));
        }else if(isdigit(str[i])){
            newStr.push_back(str[i]);
        }
     }
     int start=0,end=newStr.length()-1;
     while(start<=end){
        if(newStr[start]!=newStr[end]){
            return 0;
        }
        start++;
        end--;
     }
     return 1;
}
int revNow(string str,int start,int end){
    while(start<=end){
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
string revWordPoint(string str){
    int start=0;
    for(int i=0;i<=str.length();i++){
        if(str[i]==' '|| i==str.length()){
            int end=i-1;
            while(start<=end){
                char temp=str[start];
                str[start]=str[end];
                str[end]=temp;
                start++;
                end--;
            }
            start=i+1;
        }
    }
    return str;
}
string StringRev(string str){
    int start=0,end=str.length()-1;
    while(start<=end){
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
    return str;
}
int main(){
    int num1,num2;
    string str;
    getline(cin,str);
    cout<<revWordPoint(str);
    // cout<<StringRev(str);
    // if(PalPhrase(str)){
    //     cout<<"Yes";
    // }else{
    //     cout<<"No";
    // }
    // cout<<findLen(str);
    // cin>>num1>>num2;
    // cout<<factNormal(num1)<<" with pointer "<<factNormal(&num1);
    // cout<<GreateFib(num1);
    // cout<<GreaterPrime(&num1);
    // swapPointer(&num1,&num2);
    // cout<<num1<<" "<<num2;
    // cout<<reverseEachByPlus(num1);
    // cout<<reverseEachByMinus(num1);
    // float num;
    // cin>>num;
    // cout<<fixed;cout.precision(2);
    // cout<<calculateSalary(&num);
//  pointerGst(&num);
//  cout << fixed << setprecision(2) << num;
    // string str;
    // getline(cin,str);
    // if(palindromeString(str)){
    //     cout<<"Yes";
    // }else{
    //     cout<<"No";
    // }
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