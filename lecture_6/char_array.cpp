#include<iostream>
using namespace std;
int main(){
char arr[100];

cin.getline(arr,100,'*');
cout<<arr<<endl;

/*
char a = cin.get();
int i=0;
while(a!='\n'){
    arr[i] = a;
    a = cin.get();
    i++;
}
arr[i] = '\0';
cout<<arr<<endl;



   /*
char arr[] = {"abc"};
cout<<arr<<endl;
if(arr[3]=='\0'){
    cout<<"NULL"<<endl;
}
cout<<sizeof(arr)/sizeof(char)<<endl;
/*
for(int i=10;i<100;i++){
    cout<<arr[i]<<endl;
}
*/

}
