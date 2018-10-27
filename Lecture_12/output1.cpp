#include<iostream>
using namespace std;
void myfunction(int* p) {
    int q = 10;
    //p = &q;
    *p+=20;
    cout << *p << endl;
}

int main() {
    int x=10;
    myfunction(&x);
    cout << x << endl;
}
