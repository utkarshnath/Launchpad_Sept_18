#include<iostream>
using namespace std;
void f(){
    static int i=5;
    i++;
    cout<<i<<endl;
    i=7;
    return;
}
void f1(int n){
 static int i =5;
 if(n<=1){
    return;
 }
 cout<<"n "<<n<<endl;
 cout<<"i "<<i<<endl;
 f1(i--);
 return;
}

int main(){
    //static int x = 5;
   // f1(7);
    //f();
   // f();
   const int x = 5;
   x = 6;
   cout<<x<<endl;
}
