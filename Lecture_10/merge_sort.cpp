#include<iostream>
using namespace std;
void merge(int arr[100],int start,int mid,int end){
    int start1 = start;
    int end1 = mid;
    int start2 = mid+1;
    int end2 = end;
    int temp[100];
    int k = 0;
    while(start1<=end1 && start2<=end2){
        if(arr[start1]<arr[start2]){
            temp[k++] = arr[start1++];
        }else{
            temp[k++] = arr[start2++];
       }
    }
    while(start1<=end1){
        temp[k++] = arr[start1++];
    }
    while(start2<=end2){
        temp[k++] = arr[start2++];
    }
    for(int i=0;i<k;i++){
        arr[start++] = temp[i];
    }
}
void merge_sort(int arr[100],int start,int end){
    if(start>=end){
        return;
    }
    int mid = (start+end)/2;
    merge_sort(arr,start,mid);
    merge_sort(arr,mid+1,end);
    merge(arr,start,mid,end);
    return;
}
int main(){
int arr[100] ={ 4,5,6,1,2,3,4};
merge_sort(arr,0,6);
for(int i=0;i<7;i++){
    cout<<arr[i]<<" ";
}
}
