#include<iostream>
using namespace std;
int main(){
    int num,sum=0,rightSum=0;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    for(int i=0;i<num;i++){
        int leftSum=sum-arr[i]-rightSum;
        if(leftSum==rightSum){
            cout<<i;
        }
        rightSum+=arr[i];
    }
    return 0;
}