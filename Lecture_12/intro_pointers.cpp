#include<iostream>
using namespace std;
int main(){
/*
int x = 10;
int* xptr = &x;
cout<<xptr<<endl;
cout<<&x<<endl;
cout<<x<<endl;
cout<<endl;

int** xxptr = &xptr;
cout<<xxptr<<endl;
cout<<&xptr<<endl;
*/

char ch =  'H';
cout<<ch<<endl;
cout<<(int *)&ch<<endl;
cout<<(void *)&ch<<endl;

//char* cptr = &ch;
int * cptr = (int *)&ch;
//void * cptr = (void *)&ch;
//cout<<(int* )cptr<<endl;
cout<<cptr<<endl;
cout<<(cptr+1)<<endl;
}
