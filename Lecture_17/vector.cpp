#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v;
v[0] = 10;
v[1] = 20;
v.push_back(10);
v.push_back(20);
v.push_back(30);
for(int i=0;i<10;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
v[2] = 60;
v.pop_back();
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
cout<<v[2]<<endl;
//cout<<v.size();
}
