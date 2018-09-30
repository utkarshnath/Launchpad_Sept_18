#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;

int i=1;
while(i<=n){
    int j=1;
    while(j<=n-i){
        cout<<" ";
        j = j+1;
    }
    int k = 0;
    while(k<i){
        cout<<i+k;
        k = k+1;
    }

    int l = 1;
    while(l<i){
        cout<<i+k-2;
        k = k-1;
        l = l+1;
    }

    cout<<endl;
    i = i+1;

}

}
