#include<iostream>
using namespace std;
template<typename T>
class queue{
    T * arr;
    int max_size;
    int curr_size;
    int front;
    int rear;
public:
    queue(int n){
        max_size = n;
        curr_size = 0;
        front = 0;
        rear = n - 1;
        arr = new T[n];
    }
    bool isEmpty(){
        return curr_size==0;
    }
    int size(){
        return curr_size;
    }
    bool isFull(){
        return curr_size==max_size;
    }
    void enqueue(T data){
        if(isFull()){
            return;
        }
        rear = (rear+1) % max_size;
        arr[rear] = data;
        curr_size++;
        return;
    }
    void dequeue(){
        if(isEmpty()){
            return;
        }
        front = (front+1) % max_size;
        curr_size--;
        return;
    }
    T top(){
        if(isEmpty()){
            return NULL;
        }
        return arr[front];
    }
};
int main(){
queue<int>q(5);
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
q.enqueue(40);
q.dequeue();
cout<<q.top()<<endl;;
q.dequeue();
cout<<q.top()<<endl;;
q.dequeue();
cout<<q.top()<<endl;;

}
