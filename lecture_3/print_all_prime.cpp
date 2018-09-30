#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i=2;
while(i<=n){
    int j=2;
    bool isprime = true;
    while(j<i){
        //cout<<i<<" "<<j<<endl;
        if(i%j==0){
            //cout<<i<<" not prime"<<endl;
            isprime = false;
        }
        j = j+1;
    }
    if(isprime==true){
        cout<<j<<" prime"<<endl;
    }
    i = i+1;
}

}
