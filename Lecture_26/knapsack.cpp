#include<iostream>
using namespace std;
int Knapsack(int w[],int v[],int n,int weight){
    int table[weight+1][n+1];
    for(int i=0;i<=weight;i++){
        for(int j=0;j<=n;j++){
            if(i==0||j==0){
                table[i][j] = 0;
                continue;
            }
            if(w[j-1]<=i){
                table[i][j] = max(table[i][j-1],v[j-1]+table[i-w[j-1]][j-1]);
            }else{
                table[i][j] = table[i][j-1];
            }
        }
    }
    return table[weight][n];
}
int main(){

}
