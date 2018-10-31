#include<iostream>
using namespace std;
struct node{
    int data;
    node * next;
};
node * createLinkList(){
    node * head = 0;
    int data;
    cout<<"Enter data and -1 to exit"<<endl;
    cin>>data;
    if(data!=-1){
        head =  new node();
        head->data = data;
        head->next = NULL;
    }
    node * it = head;
    cin>>data;
    while(data!=-1){
        node * temp = new node();
        temp->data = data;
        temp->next = NULL;
        it->next = temp;
        it
        = it->next;
        cin>>data;
    }
    return head;
}
void print(node * head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
node * head = createLinkList();
print(head);
}
