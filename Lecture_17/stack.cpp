#include<iostream>
#include<vector>
using namespace std;
template<typename T>
struct stack{
private:
    vector<T>v;
    //int * arr;
   // int n;
public:
   // stack(int n){
        //arr = new int[n]
        //this->n = n;
   // }
    bool isEmpty(){
        return v.size()==0;
    }
    int size(){
        return v.size();
    }
    void push(T data){
        v.push_back(data);
    }
    void pop(){
        if(!isEmpty()){
           v.pop_back();
        }
    }
    T top(){
        if(isEmpty()){
            return NULL;
        }
        return v[v.size()-1];
    }
};
int main(){
stack<int> s;
//stack<char> s;
cout<<s.size()<<endl;
s.push(10);;
s.push(20);;
s.push(30);;
s.push(40);;
cout<<s.top()<<endl;;
s.pop();
cout<<s.top()<<endl;;
cout<<s.size()<<endl;
}

