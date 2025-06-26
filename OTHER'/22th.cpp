#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct student{
    string name;
    int age;
    bool group;
};
// int main(){
//     int num,count=0;
//     cin>>num;
//     vector<int>vec(num);
//     for(int i=0;i<num;i++)cin>>vec[i];
//     sort(vec.begin(),vec.end());
//     for(int i=0;i<num-1;i++){
//         if(vec[i]==vec[i+1]){
//             count++;
//         }
//     }
//     return 0;
// }

// int main(){
//     int num,count=0;
//     cin>>num;
//     int arr[num];
//     for(int i=0;i<num;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<num;i++){
//         for(int j=i+1;j<num;j++){
//             if(arr[i]>=arr[j]){
//                 count++;
//             }
//         }
//         if(count==num-i-1){
//             cout<<arr[i]<<" ";
//         }count=0;
//     }
// }


// int digitRightShift(string str,int *num1,int *num2){
//    *num1=0,*num2=0;
//     for(int i=0;i<str.length();i++){
//         if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'|| str[i]=='U'||
//         str[i]=='a'||str[i]=='e'||str[i]=='i'|| str[i]=='o'||str[i]=='u'){
//             (*num1)++;
//         }else{
//             (*num2)++;
//         }
//     }
// }
// int main(){
//     int vowel,conconent;
//     string str;
//     getline(cin,str);
//     int shiftedNumber = digitRightShift (str,&vowel,&conconent) ;
//     cout<<vowel<<" "<<conconent;
//     return 0;
// }


int main(){
    string str;
    int space=0,count=0;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(str[i]==' '|| str[i]=='\0'){
            space=0;
        }else if(space==0){
            space=1;
            count++;
        }
    }cout<<count;
}   