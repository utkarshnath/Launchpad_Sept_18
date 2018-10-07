#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
cin.get();
char max_array[100];
int max_length = 0;
for(int i=0;i<n;i++){
    char arr[100];
    cin.getline(arr,100);
    int j=0;
    while(arr[j]!='\0'){
        j++;
    }
    if(j>max_length){
        max_length = j;
        int k=0;
        while(arr[k]!=NULL){
            max_array[k] = arr[k];
            k++;
        }
        max_array[k] = '\0';
    }
}
cout<<max_array<<endl;
}
