#include<iostream>
using namespace std;
class Vector{
public:
    int size;
    int capacity;
    int* arr;
    Vector(){
        size=0;
        capacity=1;
        arr=new int[1];
    }
    void push(int num){
        if(size==capacity){
            capacity*=2;
            int *arr2=new int[capacity];
            for(int i=0;i<size;i++){
                arr2[i]=arr[i];
            }
            arr=arr2;
        }
        arr[size++]=num;
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void at(int index){
        if(index>=size){
            cout<<0<<endl;
        }
        cout<<arr[index]<<endl;
    }
};
int main(){
    Vector v;
    cout<<v.size<<" "<<v.capacity<<endl;
    v.push(2);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
    v.push(3);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
    v.push(4);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
    v.push(5);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
    v.push(6);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
    return 0;
}