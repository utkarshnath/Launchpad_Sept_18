#include<iostream>
using namespace std;
void print_subsequence(int input[100],int n,int inputIndex,int output[100],int outputIndex){
    if(inputIndex>=n){
        for(int i=0;i<5;i++){
            cout<<output[i]<<" ";
        }
        cout<<"            "<<outputIndex;
        cout<<endl;
        return;
    }
    output[outputIndex] = input[inputIndex];
    print_subsequence(input,n,inputIndex+1,output,outputIndex+1);
    print_subsequence(input,n,inputIndex+1,output,outputIndex);
    return;
}
int main(){
int input[100] = {1,2,3};
int output[100] = {0};
print_subsequence(input,3,0,output,0);
cout<<"hello"<<endl;
}
