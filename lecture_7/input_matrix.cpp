#include<iostream>
using namespace std;
 int main(){
 int arr[10][10];
 int row,col;
 cin>>row>>col;
 for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<i<<" "<<j<<endl;
        cin>>arr[i][j];
    }
 }

cout<<"enter yr number";
int k;
cin>>k;
 for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if(arr[i][j]==k){
            cout<<"found";
            return 0;
        }
    }
 }
 cout<<"not found"<<endl;

 }
