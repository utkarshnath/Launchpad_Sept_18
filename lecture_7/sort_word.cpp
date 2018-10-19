#include<iostream>
using namespace std;
int main(){
char arr[100][100];
int n;
cin>>n;
cin.get();
for(int i=0;i<n;i++){
    cin.getline(arr[i],100);
}

for(int i=0;i<n;i++){
    for(int j=0;j<n-1;j++){
        int k=0;
        while(arr[j][k]==arr[j+1][k] && arr[j][k]!='\0'){
            k++;
        }
        if(arr[j][k]>arr[j+1][k]){
            //swap
            char temp[100];
            int l;
            for(l=0;arr[j][l]!='\0';l++){
                temp[l] = arr[j][l];
            }
            temp[l] = '\0';
            for(l=0;arr[j+1][l]!='\0';l++){
                arr[j][l] = arr[j+1][l];
            }
            arr[j][l] = '\0';
            for(l=0;temp[l]!='\0';l++){
                arr[j+1][l] = temp[l];
            }
            arr[j+1][l] = '\0';
        }
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
}
