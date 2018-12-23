#include<iostream>
#include<stack>
using namespace std;
void uppendAtBottom(stack<int> &s,int top){
    if(s.empty()){
        s.push(top);
        return;
    }
    int t = s.top();
    s.pop();
    uppendAtBottom(s,top);
    s.push(t);
    return;
}
void reverseStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int top = s.top();
    s.pop();
    reverseStack(s);
    uppendAtBottom(s,top);
    return;
}
int main(){
    stack<int> s;
s.push(10);;
s.push(20);;
s.push(30);;
s.push(40);;
cout<<s.top();
reverseStack(s);
cout<<s.top()<<endl;

}
