#include<iostream>
using namespace std;
bool check_7(int arr[100],int n,int index){
    if(index==n){
        return false;
    }
    if(arr[index]==7){
        return true;
    }
    bool check_in_right = check_7(arr,n,index+1);
    return check_in_right;
}
int first_7(int arr[10],int n,int index){
    if(index==n){
        return -1;
    }
    if(arr[index]==7){
        return index;
    }
    return first_7(arr,n,index+1);
}
int last_7(int arr[100],int n,int index){
    if(index==n){
        return -1;
    }
    int last_index = last_7(arr,n,index+1);
    if(last_index!=-1){
        return last_index;
    }
    if(arr[index]==7){
        return index;
    }
    return -1;
}
int main(){
int arr[10]  = {1,7,99,7,9};
cout<<last_7(arr,5,0);

}
