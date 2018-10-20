#include<iostream>
using namespace std;
void toh(int n, char source,char helper,char dest){
    if(n==1){
        cout<<"move "<<source<<" to "<<dest<<endl;
        return;
    }

    toh(n-1,source,dest,helper);
    cout<<"move "<<source<<" to "<<dest<<endl;
    toh(n-1,helper,source,dest);
    return;
}
int main(){
toh(10,'A','B','c');
}
