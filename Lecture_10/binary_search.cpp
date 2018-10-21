#include<iostream>
using namespace std;
bool binary_search(int arr[100],int start,int end,int k){
    if(start>end){
        return false;
    }
    int mid = (start+end)/2;
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]>k){
        return binary_search(arr,start,mid-1,k);
    }else{
        return binary_search(arr,mid+1,end,k);
    }
}
