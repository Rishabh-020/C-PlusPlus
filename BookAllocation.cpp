#include<iostream>
#include<vector>
using namespace std;
int book_all(vector<int> arr,int num,int students){
    int sum=0;
    for(int i=0;i<num;i++)sum+=arr[i];
    int start=0,end=sum;
    while(start<=end){
        int mid=start+(end-start)/2;

    }
}
int main(){
    int num,val;
    cin>>num;
    vector<int>arr;
    for(int i=0;i<num;i++){
        cin>>val;
        arr.push_back(val);
    }
    int stdNum;cin>>stdNum;
    book_all(arr,num,stdNum);
    return 0;
}