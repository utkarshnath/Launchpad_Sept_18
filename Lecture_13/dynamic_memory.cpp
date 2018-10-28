#include<iostream>
using namespace std;
int* f(){
    int n;
    cin>>n;
    int *ptr = new int;
    *ptr = 10;
    return ptr;
}
int* f1(){
    int n = 100000;
    //cin>>n;
    int * ptr = new int[n];
    for(int i=0;i<n;i++){
        //*(ptr+i) = i;
        ptr[i] = i ;
    }
    return ptr;
}
void f2(){
    int *ptr = new int[100];
    for(int i=0;i<n;i++){
        //*(ptr+i) = i;
        ptr[i] = i ;
    }
    return;
}
int main(){
int x = 10;
int * ptr = new int;
*ptr = 14;
cout<<ptr<<endl;
cout<<*ptr<<endl;

delete ptr;
cout<<*ptr<<endl;
int * xptr = f1();
/*for(int i=0;i<100000;i++){
    cout<<*f1();
}*/
cout<<*xptr<<endl;
delete []xptr;
}
