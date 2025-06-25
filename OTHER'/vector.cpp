#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec(5 );
    // for(int i=0;i<5;i++){
    //     cin>>vec[i];
    // }
    // for(int i:vec)cout<<vec[i]<<" ";
    vec.push_back(1);
    cout<<"Size:"<<vec.size()<<endl;
    cout<<"Capacity:"<<vec.capacity()<<"\n\n\n";
    vec.push_back(1);
    cout<<"Size:"<<vec.size()<<endl;
    cout<<"Capacity:"<<vec.capacity()<<"\n\n\n";
    vec.push_back(1);
    cout<<"Size:"<<vec.size()<<endl;
    cout<<"Capacity:"<<vec.capacity()<<"\n\n\n";
    vec.push_back(1);

    cout<<"Size:"<<vec.size()<<endl;
    cout<<"Capacity:"<<vec.capacity()<<"\n\n\n";
    vec.push_back(1);
    cout<<"Size:"<<vec.size()<<endl;
    cout<<"Capacity:"<<vec.capacity()<<"\n\n\n";
    vec.push_back(1);
    cout<<"Size:"<<vec.size()<<endl;
    cout<<"Capacity:"<<vec.capacity()<<"\n\n\n";
    return 0;
}