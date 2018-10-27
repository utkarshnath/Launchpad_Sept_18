#include<iostream>
using namespace std;
int main(){
// address of operator

int x;
x = 10;
cout<<&x<<endl;

int arr[10] = {1,2,3};
cout<<arr<<endl;
cout<<&arr<<endl;
cout<<&arr[1]<<endl;
}
