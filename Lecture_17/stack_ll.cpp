#include<iostream>
using namespace std;
template<typename T>
struct node{
   T data;
    node<T> * next;
    node(T data){
        this->data = data;
        next = NULL;
    }
};
template<typename T>
struct stack{
private:
    node<T> * head;
    int n;
public:
    stack(){
        head = NULL;
        n = 0;
    }
    int size(){
        return n;
    }
    bool isEmpty(){
        return n==0;
    }
    void push(T data){
        node<T> * temp = new node<T>(data);
        if(isEmpty()){
            head = temp;
            n++;
            return;
        }
        temp->next = head;
        head = temp;
        n++;
    }
    void pop(){
        if(isEmpty()){
            return;
        }
        node<T> * temp = head;
        head = head->next;
        delete temp;
        n--;
    }
    int top(){
        if(isEmpty()){
            return -1;
        }
        return head->data;
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
