#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
int arr1[10] = {4,2, 8, 1, 6};
int arr2[10] = {4,9,2,5};
unordered_set<int> s;
for(int i=0;i<5;i++){
    s.insert(arr1[i]);
}
s.erase(2);
s.clear();
for(int i=0;i<4;i++){
    unordered_set<int>:: iterator it = s.find(arr2[i]);
    if(it==s.end()){
        cout<<arr2[i]<<" Does not exit"<<endl;
    }
    if(it!=s.end()){
        cout<<arr2[i]<<" exists"<<endl;;
    }
}
}
