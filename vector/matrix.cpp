#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(23);
    vec.push_back(2);
    vec.push_back(3);
    // cout<<vec.max_size();
    for(int i:vec)cout<<i<<" ";
    return 0;
}