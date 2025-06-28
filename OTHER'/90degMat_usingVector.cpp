#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
        int len1=matrix.size(),len2=matrix[0].size(),j=0,left=0;
        int right=len1-1;
         for(int i=0;i<len1;i++){
            for(int j=i+1;j<len2;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<len1;i++){
            while(left<right){
                swap(matrix[i][left],matrix[i][right]);
                left++;
                right--;
            }left=0;
            right=len1-1;
        }
    }
};
int main(){
    int num1,num2;
    cin>>num1>>num2;
    vector<vector<int>> vec(num1,vector<int>(num2));
    for(int i=0;i<num1;i++){
        for(int j=0;j<num2;j++){
            cin>>vec[i][j];
        }
    }
    Solution s1;
    s1.rotate(vec);
    cout<<"New matrix"<<endl;
    for(int i=0;i<num1;i++){
        for(int j=0;j<num2;j++){
            cout<<vec[i][j]<<" ";
        }cout<<endl;
    }   
}