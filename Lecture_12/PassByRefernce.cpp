#include<iostream>
using namespace std;
void cube(int &p) {
    p = p*p*p;
    cout << p << endl;
}
void cube(int *p) {
   *p = (*p) * (*p) * (*p);
   cout << *p << endl;
}
int main() {
    int a = 10;
    cout << &a << endl;
    cout << a << endl;
    cube(a);
    cout << a << endl;
    int *p = &a;
    cout << *p << endl;
    cube(p);
    cout << *p << endl;
    return 0;
}
