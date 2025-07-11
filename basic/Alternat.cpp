#include<iostream>
using namespace std;
int alternative_swap(int arr[],int num){
    for (int i = 0; i < num - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}
int findUnique(int arr[],int num){
    // O n^2 time
    int count=0;
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(arr[i]==arr[j] && i!=j){
                count=1;
                break;
            }
        }if(count!=1){
            return arr[i];
        }count=0;
    }

    // O n 
}
int printArray(int arr[],int num){
    for(int i=0;i<num;i++)cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    int num;cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)cin>>arr[i];
    // alternative_swap(arr,num);
    cout<<findUnique(arr,num);
    // printArray(arr,num);
    return 0;
}