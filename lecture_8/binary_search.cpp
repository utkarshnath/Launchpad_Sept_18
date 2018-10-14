#include<iostream>
using namespace std;
bool binary_search(int arr[10],int n,int k){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==k){
            return true;
        }
        if(arr[mid]>k){
            end = mid-1;
        }
        if(arr[mid]<k){
            start = mid+1;
        }
    }
    return false;
}
int main(){
int arr[10] = {1,3,5,7,9,10};
int n = 6;
int k;
cin>>k;
cout<<binary_search(arr,n,k);
}
