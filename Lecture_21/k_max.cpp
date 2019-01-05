#include<iostream>
#include<queue>
using namespace std;
int main(){
priority_queue<int,vector<int>,greater<int> >p;
int k;
cin>>k;
int data;
int i=0;
cin>>data;
while(data!=-1){
    while(i<k){
        p.push(data);
        i++;
        cin>>data;
        continue;
    }
    if(data>p.top()){
        p.pop();
        p.push(data);
    }
    cin>>data;
}
while(!p.empty()){
    cout<<p.top();
    p.pop();
}

}
