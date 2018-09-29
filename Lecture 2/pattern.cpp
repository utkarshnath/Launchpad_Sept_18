#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;

int value = 1;
int i = 1;
while(i<=n){
    int j = 1;
    while(j<=i){
        cout<<value;
        value =value+1;
        j = j+1;
    }
    cout<<'\n';
    i = i+1;
}

}
