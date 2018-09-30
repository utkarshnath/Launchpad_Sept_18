#include<iostream>
using namespace std;
int main(){

/*
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<char(65+i);
    }
    cout<<endl;
}
*/

int x=0;
int n = 15;
for(int i=0;i<32;i++){
    x += n&1;
    n = n>>1;
}
cout<<x;
}
