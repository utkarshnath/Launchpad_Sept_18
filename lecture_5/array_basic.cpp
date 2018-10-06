#include<iostream>
using namespace std;
int main(){
    //cout<<INT_MAX;
int arr[5] = {1,2,3,4};
for(int i=0;i<5;i++){
    cin>>arr[i];
}



int max = INT_MIN;
for(int i=0;i<5;i++){
    if(arr[i]>max){
        max = arr[i];
    }
}
cout<<max<<endl;
/*
cout<<"enter the number you want to find"<<endl;
int k;
cin>>k;
for(int i=0;i<10;i++){
    if(arr[i]==k){
        cout<<"found at "<<i<<endl;
        return 0;
    }
}
cout<<"not found";
*/
/*
// reverse print
for(int i=9;i>=0;i--){
    cout<<arr[i]<<" ";
}
*/

/*
//cout<<sizeof(ar)<<endl;
for(int i=0;i<4;i++){
    cin>>arr[i];
}

for(int i=0;i<4;i++){
    cout<<arr[i];
}
*/

//cout<<arr[5]<<endl;
}
