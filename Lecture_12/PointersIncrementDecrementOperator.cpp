#include<iostream>
using namespace std;
void f(){
    int a = 10;
    int *p = &a;
    cout << p << endl;
    cout << (*(p)++) << endl;
    cout << p << endl;
    cout << *p << endl;
    cout << *++p << endl;
    cout << *p << endl;
    cout << ++*p << endl;
    cout << (*p)++ << endl;
    cout<<endl;
}
int main() {
    f();
}
