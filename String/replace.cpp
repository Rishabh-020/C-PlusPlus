#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    string ch;
    cin>>ch;
    int len1=str.length(),len2=ch.length();
    for(int i=0;i<len1;i+=len2)
    return 0;
}