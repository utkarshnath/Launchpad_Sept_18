#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
void permutate(char arr[100],int index){
    if(arr[index]=='\0'){
        cout<<arr<<endl;
        return;
    }
    for(int j=index;arr[j]!='\0';j++){
        swap(arr[index],arr[j]);
        permutate(arr,index+1);
        swap(arr[j],arr[index]);
    }
    return;
}
int main(){
char arr[10] = "ABCD";
permutate(arr,0);
}
