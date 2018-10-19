#include<iostream>
using namespace std;
int main(){
char arr[10][100];
int n;
cout<<"enter number of string"<<endl;
cin>>n;
cin.get();
for(int i=0;i<n;i++){
    cin.getline(arr[i],100);
}
cout<<"enter the string to find"<<endl;
char temp[100];
cin.getline(temp,100);

for(int i=0;i<n;i++){
    //bool found = true;
    int j;
    for(j=0;arr[i][j]!='\0' && temp[j]!='\0';j++){
        if(arr[i][j]!=temp[j]){
            //found = false;
            break;
        }
}
    if(arr[i][j]=='\0' && temp[j]=='\0'){
        cout<<"found"<<endl;
        return 0;
    }
}
cout<<"not found"<<endl;
/*
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
*/
}
