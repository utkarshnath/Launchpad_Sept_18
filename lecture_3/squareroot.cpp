#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
float inc=1;
int i = 0;
float j=0;
while(i<3){
    while(j*j<n){
        j = j+inc;
    }
    j = j-inc;
    inc = inc/10;
    i = i+1;
}
cout<<j<<endl;
}
