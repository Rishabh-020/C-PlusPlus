/* In this we have same function name but they have different work to do 
   They can have same name but the variable we are passing to the function should be differenet
*/
#include<iostream>
using namespace std;
class fun{
public:
    void sum(int a,int b){
        cout<<a+b<<endl;
    }
    void sum(int a,int b,int c){ // same name but each have its own different task also called function overloading
        cout<<a+b+c<<endl;
    }
    void sum(string a,string b){
        cout<<a+" "+b<<endl;
    }
};
int main(){
    fun f1;
    f1.sum(1,3);
    f1.sum("hello","name");
    return 0;
}

/*  Explanation for this whole code :
First I create a class name fun in which I declare three function with the same name by using the method of 
function overloading in which each function perform different task with a specifc requirment 
Then in the main function i create an object for the class name  "f1" through which i acess the function in
the class */