#include<iostream>
using namespace std;
int main(){
char arr1[100];
char arr2[100];
cin.getline(arr1,100);
cin.getline(arr2,100);

int ascii[256] = {0};
for(int i=0;arr1[i]!='\0';i++){
    int temp = arr1[i];
    ascii[temp] = ascii[temp] + 1;
    //ascii[arr1[i]]++;
}
for(int i=0;arr2[i]!='\0';i++){
    int temp = arr2[i];
    ascii[temp] = ascii[temp] - 1;
    //ascii[arr1[i]]++;
}
for(int i=0;i<256;i++){
    if(ascii[i]){
        cout<<"not"<<endl;
        return 0;
    }
}
cout<<"yes"<<endl;

/*
int n1 = strlen(arr1);
int n2 = strlen(arr2);
bool found[100] = {false};

for(int i=0;i<n1;i++){
    bool here = false;
    for(int j=0;j<n2;j++){
        if(arr1[i]==arr2[j]){
            found[j] = true;
            here = true;
        }
    }
    if(here==false){
        cout<<"not"<<endl;
        return;
    }
}
for(int i=0;i<n2;i++){
    if(found[i]==false){
        cout<<"not"<<endl;
        return;
    }
}
cout<<"yes"<<endl;

*/
}
