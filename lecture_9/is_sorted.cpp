#include<iostream>
using namespace std;
bool is_sorted(int arr[10],int n,int index){
    if(index==n-1){
        return true;
    }
    bool right = is_sorted(arr,n,index+1);
    if(right==true && arr[index]<=arr[index+1]){
        return true;
    }
    return false;
}
int sum_array(int arr[10],int n,int index){
    if(index==n-1){
        return arr[n-1];
    }
    int right = sum_array(arr,n,index+1);
    int curr = arr[index];
    return right+curr;
}
int main(){
int arr[10] = {1,2,32,4,5};
//cout<<is_sorted(arr,5,0)<<endl;
cout<<sum_array(arr,5,0)<<endl;
}
