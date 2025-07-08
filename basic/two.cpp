#include<iostream>
#include<vector>
using namespace  std;
class Solution {
    public:
      int peakElement(vector<int> &arr) {
          // Your code here
          int count=0;
          for(int i=1;i<arr.size()-1;i++){
              if(arr[i]>arr[i-1]&& arr[i]>arr[i+1]){
                  return i;
              }
          }
          for(int i=1;i<arr.size();i++){
              if(arr[i]>arr[i-1])count++;
          }
          if(count==arr.size()-1)return 1;
          return 0;
      }
  };
  int main(){
    Solution s1;
    int num;cin>>num;
    vector<int>arr(num);
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    cout<<s1.peakElement(arr);
  }