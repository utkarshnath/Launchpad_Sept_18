#include<iostream>
#include<queue>
using namespace std;
int main(){
//max heap
priority_queue<int> p1;
//min heap
priority_queue<int,vector<int>,greater<int> > p2;
int n,median;
cin>>n;
while(n!=-1){
    if(p1.size() > p2.size()){
        if(n<median){
            p2.push(p1.top());
            p1.pop();
            p1.push(n);
        }else{
            p2.push(n);
        }
        median = (p1.top()+p2.top())/2;
    }
    else if(p1.size() < p2.size()){
        if(n<median){
            p1.push(n);
        }else{
            p1.push(p2.top());
            p2.pop();
            p2.push(n);
        }
        median = (p1.top()+p2.top())/2;
    }
    else{
        if(n<median){
            p1.push(n);
            median = p1.top();
        }else{
            p2.push(n);
            median = p2.top();
        }
    }
    cout<<median<<endl;
    cin>>n;
}

}
