#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int passFn(vector<int> v1,vector<int>v2){
    vector<int>vec;
    vec.insert(vec.end(),v1.begin(),v1.end());
    vec.insert(vec.end(),v2.begin(),v2.end());
    sort(vec.begin(),vec.end());
    int len=vec.size();
    if(len%2==0){
        return (vec[len/2]+vec[(len/2)-1])/2.0;
    }
    return vec[len/2];
}
int main(){
    // string str;
    // getline(cin,str);
    // cout<<str;
    // for(int i=0;i<str.length();i++){
    //     cout<<str[i];
    // }
    // return 0;
    // int y=num1>>(num2),x=num1^num2;
    // cout<<y<<" "<<x;
    int num1,num2;
    cin>>num1>>num2;
    vector<int>vec1(num1);
    for(int &i: vec1){
        cin>>i;
    }
    vector<int>vec2(num2);
    for(int &i: vec2){
        cin>>i;
    }
    cout<<passFn(vec1,vec2);
}