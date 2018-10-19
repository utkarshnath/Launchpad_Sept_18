#include<iostream>
using namespace std;
void selection_sort(int arr[10],int n,int index){
    if(index==n){
        return;
    }
    int min = arr[index];
    int min_index = index;
    for(int i=index+1;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
            min_index = i;
        }
    }
    arr[min_index] = arr[index];
    arr[index] = min;
    selection_sort(arr,n,index+1);
    return;
}
int main(){
int arr[10] = {1,-23,32,-45};
selection_sort(arr,4,0);
for(int i=0;i<4;i++){
    cout<<arr[i]<<endl;
}
}
