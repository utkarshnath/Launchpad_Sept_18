#include<iostream>
using namespace std;
void change_array(int arr[][10],int n){
    for(int i=0;i<n;i++){
        //arr[i]++;
    }
    return;
}

int main(){
int arr[10][10];
for(int i=0;i<10;i++){
    arr[i][i]=i;
}
change_array(arr,10);

for(int i=0;i<10;i++){
    cout<<arr[i][i]<<" ";
}
}
