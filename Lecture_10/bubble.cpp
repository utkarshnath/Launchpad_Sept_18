#include<iostream>
using namespace std;

int multiply(int a,int b){
    if(b==0){
        return 0;
    }
    return multiply(a,b-1) + a;
}
/*
void bubble(int arr[10],int n,int i,int j){
    if(j>=n-i-1){
        return;
    }
    if(arr[j]>arr[j+1]){
        int temp = arr[j];
        arr[j] =  arr[j+1];
        arr[j+1] = temp;
    }
    for(int i=0;i<n;i++){
        bubble(arr,n,i,j+1);
    }
}*/

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
    return;
}
void bubble_sort(int arr[100],int n,int index){
    if(n==0 ||n==1){
        return;
    }
    if(index==n-1){
        bubble_sort(arr,n-1,0);
        return;
    }
    if(arr[index]>arr[index+1]){
        swap(arr[index],arr[index+1]);
    }
    bubble_sort(arr,n,index+1);
    return;
}
int main(){
int a = 5;
int b = 7;
swap(a,b);
cout<<a<<" "<<b<<endl;

}
