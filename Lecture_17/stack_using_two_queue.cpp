#include<iostream>
#include<queue>
using namespace std;
struct stack{
private:
    queue<int> q1;
    queue<int>q2;
public:
    bool isEmpty(){

    }
    int size(){

    }

    void push(int data){
        if(q1.empty()){
            q1.push(data);
            while(!q2.empty()){
                q1.push(q2.front());
                q2.pop();
            }
        }else{
            q2.push(data);
            while(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
        }
    }
    void pop(){

    }
    void top(){

     }
};
int main(){


}

