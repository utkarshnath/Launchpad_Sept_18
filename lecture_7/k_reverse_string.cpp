#include<iostream>
using namespace std;
int main(){
char arr[100];
cin.getline(arr,100);
int k;
cin>>k;
int n = strlen(arr);
char temp[10];
// cpoing characters to temp
for(int i=n-k,j=0;i<n;i++,j++){
    temp[j] = arr[i];
}
temp[k] = '\0';
for(int i=n-k-1;i>=0;i--){
    arr[i+k] = arr[i];
}
for(int i=0;i<k;i++){
    arr[i] = temp[i];
}
cout<<arr;
}
