#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int num,large=0,secound=0;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)cin>>arr[i];
    // for(int i=0;i<num;i++){
    //     if(arr[i]>large){
    //         secound=large;
    //         large=arr[i];
    //     }else if(secound<arr[i] && arr[i]<large){
    //         secound=arr[i];
    //     }
    // }
    // for(int i=0;i<num;i++){
    //     if(arr[i]!=large && arr[i]!=secound){
    //         cout<<arr[i]<<" ";
    //     }
    // }
    for(int i=1;i<num;i++){
        for(int j=0;j<num-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for (int i = 0; i < num; i++)
        cout<< arr[i]<<" ";
}