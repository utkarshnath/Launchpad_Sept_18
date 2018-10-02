#include<iostream>
using namespace std;
int main(){
int a = 2;
for(int i=0;i<20;i++){
    for(int j=0;j<10;j++){
        for(int k=5;k<10;k++){
            a++;
        }
    }
}
cout<<++a;
}
