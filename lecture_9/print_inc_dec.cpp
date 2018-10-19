#include<iostream>
using namespace std;
void print_inc(int n){
    if(n==0){
        return;
    }
    print_inc(n-1);
    cout<<n<<endl;
    return;
}
void print_dec(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    print_dec(n-1);
    return;
}
int main(){
print_inc(5);
print_dec(5);
}
