#include<iostream>
using namespace std;
int sum(int arr[10],int n){
int sum=0;
for(int i=0;i<n;i++){
    sum+=arr[i];
}
return sum;
}
void selction_sort(int arr[10],int n){
    for(int i=0;i<n;i++){
        int min = arr[i];
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                min_index = j;
            }
        }
        //swap
        arr[min_index] = arr[i];
        arr[i] = min;
    }
}
int main(){
int arr[10] = {5,7,9,1,2};
cout<<sum(arr,5)<<endl;;
selction_sort(arr,5);
for(int i=0;i<5;i++){
    cout<<arr[i];
}
}

