#include<iostream>
using namespace std;
int main(){
int arr[10] = {1,2,3,4,5,6,7,8,9,10};
int n = 10;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        cout<<arr[i]<<" "<<arr[j]<<" ";
        cout<<endl;
    }
}

}
