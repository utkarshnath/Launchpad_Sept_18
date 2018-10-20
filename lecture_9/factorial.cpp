#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    int x = factorial(n-1);
    cout<<x<<endl;
    return x*n;
}
int main(){
cout<<factorial(4)<<endl;
}

