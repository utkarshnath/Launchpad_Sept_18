#include<iostream>
using namespace std;
int main(){
int arr[100][100] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};
int m = 4;
int n = 4;
int a = 0;
int count=0;
while(true){
for(int i=a,j=a;j<n-a;j++){
    cout<<arr[i][j]<<" ";
    count++;
    if(count==m*n){
        return 0;
    }
}
for(int i=a+1,j=n-1-a;i<m-a;i++){
    cout<<arr[i][j]<<" ";
    count++;
    if(count==m*n){
        return 0;
    }
}
for(int i=m-1-a,j=n-2-a;j>=a;j--){
    cout<<arr[i][j]<<" ";
    count++;
    if(count==m*n){
        return 0;
    }
}

for(int i=m-2-a,j=a;i>a;i--){
    cout<<arr[i][j]<<" ";
    count++;
    if(count==m*n){
        return 0;
    }
}
a++;
}
}
