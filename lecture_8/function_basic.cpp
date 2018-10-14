#include<iostream>
using namespace std;

void number(int &c){
    c++;
    //cout<<++c<<endl;
    cout<<&c<<endl;
}

void f(int &b,int temp){
    b++;
    temp= 10;
    cout<<b<<endl;
}
int main(){
 int c = 10;
 cout<<&c<<endl;
 number(c);
 /*
int b = 5;
cout<<&b<<endl;
int &b = a;
int temp = 4;
f(b,temp);


cout<<b<<endl;
cout<<temp<<endl;
/*
int c = 4;
number(c);
cout<<c;
*/
/*
int a = 10;
int &b = a;

b++;
cout<<a<<endl;
cout<<b<<endl;
*/

}
