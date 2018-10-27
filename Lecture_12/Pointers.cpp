#include<iostream>
using namespace std;
int main() {
    int x = 1, y = 2, z[10];
    int *ip;
    ip = &x;
    y = *ip;
    *ip = 0;
    cout << *&x<< endl;
    cout << x << " " << y << "  "<< *ip <<  "   " << &x << "   "<< ip;
    cout << endl;
    return 0;
}
