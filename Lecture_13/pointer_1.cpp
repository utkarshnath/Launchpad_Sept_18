#include<iostream>
using namespace std;
void fun(int *p) {
    p = new int;
    *p = 8;
}
int main() {
    int x = 10;
    int * p = &x;
    fun(p);
    *p = 6;
    cout << *p << endl;
    return 0;
}
