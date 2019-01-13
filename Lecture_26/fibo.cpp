#include<iostream>
using namespace std;
long arr[1000];
long fibo(int n){
    if(n==0){
        arr[0] = 0;
        return 0;
    }
    if(n==1){
        arr[1] = 1;
        return 1;
    }
    if(arr[n]!=-1){
        return arr[n];
    }
    arr[n] = fibo(n-1)+fibo(n-2);
    return arr[n];
}
int fibodp(int n){
    int dp[1000] = {0,1};
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main(){
    for(int i=0;i<1000;i++){
        arr[i] = -1;
    }
    cout<<fibo(100)<<endl;
}
