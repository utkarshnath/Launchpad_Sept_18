#include<iostream>
using namespace std;
void merge(int arr1[10],int arr2[10],int m,int n){
    int arr3[20];
    int index = 0;
    int i=0,j=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            arr3[index++] = arr1[i++];
        }else{
            arr3[index++] = arr2[j++];
        }
    }
    while(i<m){
        arr3[index++] = arr1[i++];
    }
    while(j<n){
        arr3[index++] = arr2[j++];
        //index++;
        //j++;
    }
    for(int i=0;i<index;i++){
        cout<<arr3[i]<<" ";
    }
}
int main(){
int arr1[10] = {1,5,10,15};
int arr2[10] = {2,3,7,9};
merge(arr1,arr2,4,4);
}
