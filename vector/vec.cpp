#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int num,input;
    cin>>num;
    vector<int>vec(num);
    for(int i=0;i<num;i++){
        // cin>>input;
        // vec.push_back(input);
        cin>>vec[i];
    }
    int max=INT_MIN,min=INT_MAX;
    for(int i=0;i<num;i++){
        if(vec[i]>max){
            max=vec[i];
        }
        if(vec[i]<min){
            min=vec[i];
        }
    }
    cout<<"Maximum: "<<max<<endl<<"Minimum: "<<min;
}