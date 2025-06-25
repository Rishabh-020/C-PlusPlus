#include<iostream>
using namespace std;
int main(){
    int count=0;
    string str;
    getline(cin,str);
    cout<<str.at(2);
    for(int i=0;i<str.length();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'|| str[i]=='u'||
            str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'|| str[i]=='U'){
            count++;
        }
    }
    // cout<<count;
    // cin>>str;
    // for(int i=0;i<20;i++)cin>>str[i];
    // for(int i=0;i<str.size();i++){
        // cout<<str;
    // }
    // int num;
    // cin>>num;
    // int arr[num];
    // for(int i=0;i<num;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<num;i++){
    //     for(int j=i+1;j<num;j++){
    //         if(arr[i]>arr[j]){
    //             swap(arr[i],arr[j]);
    //         }
    //     }
    // }
    // cout<<"The sorted array is:";
    // for(int i=0;i<num;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;
    // cout<<"hello";
    return 0;
}