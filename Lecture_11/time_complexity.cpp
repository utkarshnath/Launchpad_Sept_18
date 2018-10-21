#include<iostream>
using namespace std;
void bubble(int arr[100],int n){
for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}
}
void merge(int arr[100000],int start,int mid,int end){
    int start1 = start;
    int end1 = mid;
    int start2 = mid+1;
    int end2 = end;
    int temp[100000];
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
void merge_sort(int arr[100000],int start,int end){
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
int arr[100000] = {0};
clock_t start = clock();
//bubble(arr,100000);
merge_sort(arr,0,100000);
clock_t end = clock();
cout<<end-start<<endl;
}

