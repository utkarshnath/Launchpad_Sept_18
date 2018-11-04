#include<iostream>
using namespace std;
struct node{
    int data;
    node * next;
    node * prev;
    node(){

    }
    node(int data){
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
    }
};
pair<node*,node*> createLinkList(){
    node * head = 0;
    int data;
    cout<<"Enter data and -1 to exit"<<endl;
    cin>>data;
    if(data!=-1){
        head =  new node();
        head->data = data;
        head->next = NULL;
        head->prev = NULL;
    }
    node * it = head;
    cin>>data;
    while(data!=-1){
        node * temp = new node();
        temp->data = data;
        temp->next = NULL;
        it->next = temp;
        temp->prev = it;
        it = it->next;
        cin>>data;
    }
    pair<node*,node*>p;
    p.first = head;
    p.second = it;
    return p;
}

void print(node * head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head = head->prev;
    }
    cout<<"NULL"<<endl;
}
int main(){
    pair<node*,node*> p = createLinkList();
    //print(p.first);
    print(p.second);
}
