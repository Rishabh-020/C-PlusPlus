#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cin>>num1>>num2;
    int arr[num1][num2];
    for(int i=0;i<num1;i++){
        for(int j=0;j<num2;j++){
            cin>>arr[i][j];
        }
    }
    int new_arr[num2][num1];
    int k=0,l=num1-1;
    for(int i=0;i<num1;i++){
        for(int j=0;j<num2;j++){
            new_arr[j][num1-i-1]=arr[i][j];
        }
    }
    for(int i=0;i<num2;i++){
        for(int j=0;j<num1;j++){
            cout<<new_arr[i][j]<<' ';
        }cout<<endl;
    }
    return 0;
}