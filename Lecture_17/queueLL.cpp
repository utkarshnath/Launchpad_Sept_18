#include<iostream>
using namespace std;
struct node{
    int data;
    node * next;
    node(int data){
        this->data = data;
        next = NULL;
    }
};
class queue{
private:
    node * head;
    node * tail;
    int n;
public:
    queue(int n){
        this->n = n;
        head = NULL;
        tail = NULL;
    }
    bool isEmpty(){
        return n==0;
    }
    int size(){
        return n;
    }

    void enqueue(data){
        node * temp = new node(data);
        n++;
        if(isEmpty()){
            head = temp;
            tail = temp;
            return;
        }
        tail->next = temp;
        tail = temp;
    }
    void dequeue(){
        if(isEmpty()){
            return;
        }
        node * temp = head;
        head = head->next;
        delete temp;
        n--;
        return;
    }
    int top(){
        if(!isEmpty()){
           return head->data;
        }
    }
};
