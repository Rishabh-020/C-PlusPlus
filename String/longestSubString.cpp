#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
    public:
        int check(string str){
            int len=str.length();
            for(int i=0;i<len;i++){
                if((int)str[i]-(int)str[len-1-i]==0){
                    return 0;
                }
            }
            return 1;
        }
        int lengthOfLongestSubstring(string s) {
            string str;
            int len=s.length(),j=0,maxLen=0;
            for(int i=0;i<len;i++){
                str.push_back(s[i]);
                if(check(str)){
                    maxLen=max(maxLen,(int)str.length());
                }else{
                    str.clear();
                }
            }
            return maxLen;
        }
};
int main(){
    Solution sl;
    string str;
    cin>>str;
    cout<<sl.lengthOfLongestSubstring(str);
    // cout<<(int)'a';
}