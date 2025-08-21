#include<iostream>
using namespace std;
int main(){
    // int num1,num2,num3,num4;cin>>num1>>num2>>num3>>num4;
    auto func = [](int num1,int num2)
    {
        while(num2>0){
            int temp = num2;
            num2 = num1 % num2;
            num1 = temp;
        }
        cout<<num1<<endl;
        cout << "hello world" << endl;
    };
    // func(num1,num2);
    // func(num3,num4);
    int arr[]={1,2,3,4,5,6};
    auto lam= [](int arr[]){
        for(int i=0;i<6;i++){
            if(arr[i]%2==0){
                cout<<arr[i]<<" ";
            }
        }
    };
    int x=10,y=11;
    auto equal=[&](){
        cout<<"X: "<<x<<", Y: "<<y<<endl;
    };
    auto change=[&](){
        x++;y++;
    };
    // lam(arr);
    equal();
    change();
    equal();
    
    return 0;
}