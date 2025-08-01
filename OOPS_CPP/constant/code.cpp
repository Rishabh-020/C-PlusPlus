/*
 * Complete the function below.
 * Please store the size of the int array to be returned in result_size pointer. For example,
 * int a[3] = {1, 2, 3};
 * *result_size = 3;
 * return a;
 * 
 */
#include<iostream>
using namespace std;
int find(int arr[],int len){
    int val=arr[0];
    for(int i=1;i<len;i++){
        if(arr[i]<val)val=arr[i];
    }
    return val;
}
int max_val(int arr[],int len){
    int val=arr[0];
    for(int i=1;i<len;i++){
        if(arr[i]>val)val=arr[i];
    }
    return val;
}
int* cutSticks(int length, int lengths[], int *result_size) 
{
    int *result = new int[length];
    int cut=0,index=0;
    for(int i=0;i<length;i++){
        int small=find(lengths,length);
        for(int j=0;j<length;j++){
            if(lengths[j]>=1){
                lengths[j]=lengths[i]-small;
                cut++;
            }
        }
        if(cut!=0)
        result[index++]=max_val(lengths,length);
        cut=0;
    }
}

int main()
{
  int *res, res_size, lengths_size = 0, i;
  cin>>lengths_size;

  int lengths[lengths_size];
  for(i = 0; i < lengths_size; i++) 
    cin>>lengths[i];

  res = cutSticks(lengths_size, lengths, &res_size);
  for (i = 0; i < res_size; i++) 
    cout<<res[i]<<endl;

  return 0;
}