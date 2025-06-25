#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    cout<<str;
    for(int i=0;i<str.length();i++){
        cout<<str[i];
    }
    return 0;
}