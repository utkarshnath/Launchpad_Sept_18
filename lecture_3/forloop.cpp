#include<iostream>
using namespace std;
int main(){
int n = 10;
for(int i=2;i<=n;i++){
    int isprime = 10;
    for(int j=2;j<i;j++){
        if(i%j==0){
            isprime = 15;
        }
    }
    if(isprime==10){
        cout<<i<<endl;
    }
}

}
