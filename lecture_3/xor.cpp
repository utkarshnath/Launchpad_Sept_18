#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int x;
int i=0;
int unique=0;
while(i<n){
    cin>>x;
    unique^=x;
    i++;
}
cout<<unique<<endl;
}

