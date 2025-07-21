#include<iostream>
using namespace std;
void reverse(int arr[],int num){
    if(num==0){
        return;
    }    
    for(int i=0;i<num-1;i++){
        if(arr[i]>arr[num]){
            int temp=arr[i];
            arr[i]=arr[num];
            arr[num]=temp;
        }
    }
    reverse(arr,num-1);
}
int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    reverse(arr,num-1);
    for(int i=0;i<num;i++)cout<<arr[i]<<" ";
    return 0;
}