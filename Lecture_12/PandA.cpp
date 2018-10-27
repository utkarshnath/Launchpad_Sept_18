#include<iostream>
using namespace std;
void myFunction(int *p) {  // void myFunction(int arr[]) {
    cout << p << endl;
    cout << *p << endl;
    cout << *(p+1) << endl;
    cout << *(p+2)  << endl;
    cout << *(p + 100) << endl;
    cout << ++p << endl;
    cout << *p <<endl;
}

int main() {
    int arr[3] = {1,2,3};
    myFunction(arr);
    cout << arr << endl;
    cout << &arr[0] << endl;
    cout << &arr << endl;
    return 0;
}
