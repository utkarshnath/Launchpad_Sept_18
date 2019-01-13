#include<iostream>
using namespace std;
int longestCommonSub(string a,string b){
    int m = a.length();
    int n = b.length();
    int table[m+1][n+1];
    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0||j==0){
                table[i][j] = 0;
            }
            if(a[i-1]==b[j-1]){
                table[i][j] = table[i-1][j-1]+1;
            }else{
                table[i][j] = max(table[i-1][j],table[i][j-1]);
            }
        }
    }
    return table[m][n];
}
int main(){
cout<<longestCommonSub("XBABTR","BYXBZAR");
}
