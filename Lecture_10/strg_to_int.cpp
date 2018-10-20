#include<iostream>
using namespace std;

int str_to_int(char arr[100]){
    if(arr[0]=='\0'){
        return 0;
    }
    int n = strlen(arr);
    int l = arr[n-1]-48;
    arr[n-1] ='\0';
    int x = str_to_int(arr);
    return x*10 + l;
}
int  main(){
char arr[10] = "123";
cout<<str_to_int(arr)<<endl;
cout<<"**************"<<endl;
cout<<arr<<endl;

}
