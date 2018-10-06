
#include<iostream>
using namespace std;
int main(){
int i;
for(int i=0;i<10;i++){
    cout<<i<<endl;
    if(i>5){
        continue;
    }
    cout<<"abd";
}
/*
for(i=0;i<10;i++){
    cout<<"i "<<i<<endl;
    int j;
    for(j=0;j<23;j++){
        cout<<"j "<<j<<endl;
        if(j>4){
            break;
        }
    }
}
cout<<i<<endl;

*/
}
