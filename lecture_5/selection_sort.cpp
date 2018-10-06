#include<iostream>
using namespace std;
int main(){
int arr[5] = {7,2,1,3,4};
int n=5;
for(int j=0;j<n;j++){
int min=INT_MAX;
int min_index;
for(int i=j;i<n;i++){
    if(arr[i]<min){
        min = arr[i];
        min_index = i;
    }
}
int temp = arr[j];
arr[j] = min;
arr[min_index] = temp;
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
