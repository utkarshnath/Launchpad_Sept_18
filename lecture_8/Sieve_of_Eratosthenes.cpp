#include<iostream>
using namespace std;
void printallprime(int n){
    bool arr[100] = {true};
    for(int i=0;i<100;i++){
        arr[i] = true;
    }
    for(int i=2;i*i<=n;i++){
        if(arr[i]==true){
            for(int j=2;i*j<=n;j++){
                arr[i*j] = false;
            }
        }
    }
    for(int i=2;i<n;i++){
        if(arr[i]){
            cout<<i<<endl;
        }
    }
}
int main(){
printallprime(10);
}
