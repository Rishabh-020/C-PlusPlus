#include<iostream>
using namespace std;
int main(){
    int num,large=0,secound=0;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)cin>>arr[i];
    for(int i=0;i<num;i++){
        if(arr[i]>large){
            secound=large;
            large=arr[i];
        }else if(secound<arr[i] && arr[i]<large){
            secound=arr[i];
        }
    }
    for(int i=0;i<num;i++){
        if(arr[i]!=large && arr[i]!=secound){
            cout<<arr[i]<<" ";
        }
    }
}