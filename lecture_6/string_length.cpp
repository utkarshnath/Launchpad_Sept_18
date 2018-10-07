#include<iostream>
using namespace std;
int main(){
char arr[100];
cin.getline(arr,100);
int i=0;
while(arr[i]!='\0'){
    i++;
}
cout<<i<<endl;
}
