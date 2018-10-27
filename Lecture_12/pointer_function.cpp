#include<iostream>
using namespace std;
void f(int*  x){
    cout<<"Inside function"<<endl;
    //*x = *x + 1;
    *x++;
    cout<<*x<<endl;
    cout<<"bye function"<<endl;
    return;
}
void f1(int ** x){
    *(*x)++;
    cout<<*x<<endl;
    cout<<"bye function"<<endl;
    return;
}
// return pointer
int*  f2(int *x){
    *x++;
    cout<<*x<<endl;
    return x;
}

int main(){
int x = 10;
int * ptr = &x;
int *ptr1 = 0;
cout<<x<<endl;
cout<<*ptr<<endl;
ptr = f2(ptr);
cout<<x<<endl;
cout<<*ptr<<endl;
cout<<ptr1<<endl;
//cout<<*ptr1<<endl;
/*
int x = 10;
int * xptr = &x;
f1(&xptr);
cout<<xptr<<endl;
cout<<*xptr<<endl;
cout<<x<<endl;
*/
//f(&x);
//cout<<x<<endl;


}
