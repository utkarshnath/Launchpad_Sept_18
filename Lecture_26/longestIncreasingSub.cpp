#include<iostream>
using namespace std;
int longestIncSub(int arr[100],int n){
    int dp[n+1];
    dp[0] = 1;
    for(int i=1;i<=n;i++){
        dp[i] = 1;
        for(int j=1;j<i;j++){
            if(arr[j]<=arr[i] && dp[i]<dp[j]+1){
                dp[i] = dp[j]+1;
            }
        }
    }
    int m = INT_MIN;
    for(int i=0;i<n+1;i++){
        if(dp[i]>m){
            m = dp[i];
        }
    }
    return m;
}
int main(){
int arr[10] = {10,2,5,15,26,17,5,75};
cout<<longestIncSub(arr,8);
}
