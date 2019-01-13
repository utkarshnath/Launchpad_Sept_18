#include<iostream>
using namespace std;
int coinChange(int n,int arr[],int size){
    if(n<0 || size<=0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    return coinChange(n,arr,size-1) + coinChange(n-arr[size-1],arr,size);
}

int coinDp(int n,int arr[],int size){
    int table[n+1][size+1];
    for(int i=0;i<=n;i++){
        table[i][0] = 0;
    }
    for(int i=0;i<=size;i++){
        table[0][i] = 1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=size;j++){
            //wihtout j
            int a = table[i][j-1];
            //with J
            int b = 0;
            if(i-j>=0){
                b = table[i-j][j];
            }
            table[i][j] = a+b;
        }
    }
    return table[n][size];
}
int main(){
int arr[10] = {1,2,3};
cout<<coinDp(4,arr,3);
}
