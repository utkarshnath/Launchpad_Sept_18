#include<iostream>
using namespace std;
void insertion_sort(int arr[10],int n){
    for(int i=0;i<n-1;i++){
        int curr = arr[i+1];
        int j=i;
        while(arr[j]>curr && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
    }
}
int main(){
    int arr[5] = {7,3,2,1,2};
    insertion_sort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
