#include<iostream>
using namespace std;
int far_to_cel(){
    for(int f=0;f<300;f+=20){
        int c = (5*(f-32))/9;
        cout<<f<<" "<<c<<endl;
    }
}
void far_to_cel(int s, int e){
    for(int f=s;f<=e;f+=20){
        int c = (5*(f-32))/9;
        cout<<f<<" "<<c<<endl;
    }
}
int greater_number(int n,int a,char t){
    cout<<"hello"<<endl;
    return n+1;
}
bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
                //cout<<"not prime"<<endl;
            return false;
        }
    }
    //cout<<"prime"<<endl;
    return true;
}
void print_all_prime(int n){
    for(int i=2;i<=n;i++){
        if(isPrime(i)==true){
            cout<<i<<endl;
        }
    }
    //return;
}
int main(){
//cout<<far_to_cel();
/*
int start,end;
cin>>start>>end;
far_to_cel();
*/

//isPrime(15);

print_all_prime(10);
}
