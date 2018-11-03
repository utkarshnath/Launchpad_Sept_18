#include<iostream>
using namespace std;
struct node{
    int data;
    node * next;
    node(){

    }
    node(int data){
    this->data = data;
    this->next = NULL;
    }
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
        it = it->next;
        cin>>data;
    }
    return head;
}
void createll(node ** head){
    int data;
    cout<<"Enter data and -1 to exit"<<endl;
    cin>>data;
    if(data!=-1){
        *head =  new node();
        (*head)->data = data;
        (*head)->next = NULL;
    }
    node * it = *head;
    cin>>data;
    while(data!=-1){
        node * temp = new node();
        temp->data = data;
        temp->next = NULL;
        it->next = temp;
        it = it->next;
        cin>>data;
    }
    return ;
}
void createll2(node *& head){
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
        it = it->next;
        cin>>data;
    }
    return;
}
void print(node * head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

//accessing next element from a given nmode
node * nextElelment(node * element){
    if(element==NULL){
        cout<< "USE yr brain!"<<endl;
        return NULL;
    }
    return element->next;
}

//insert at top
void insertAtTop(node **head,int data){
    node * temp = new node(data);
    temp->next = *head;
    *head = temp;
}
//insertAtLast
void inserstAtLAst(node * head,int data){
    node * temp = new node(data);
    while(head->next!=NULL){
        head = head->next;
    }
    head->next = temp;
}
//insertAtPositionK
void insertAtPositionK(node ** head,int data,int k){
    node * temp = new node(data);
    if(k==0){
        temp->next = *head;
        *head = temp;
        return;
    }
    node * it  = *head;
    while(--k){
        it = it->next;
    }
    temp->next = it->next;
    it->next = temp;
    return;
}
// delete
void deleteAtPositionK(node ** head,int k){
    cout<<"delete at position "<<k<<endl;
    node * temp = *head;
    if(k==0){
        *head = (*head)->next;
        delete temp;
        return;
    }
    while(--k){
        temp = temp->next;
    }
    node * it = temp->next;
    temp->next = temp->next->next;
    delete it;
    return;
}
int length(node * head){
    int count = 0;
    while(head){
        count++;
        head = head->next;
    }
    return count;
}
node * findRecursiveFront(node * head,int value){
    if(head==NULL){
        return NULL;
    }
    if(head->data==value){
        return head;
    }
    cout<<head->data<<endl;
    return findRecursiveFront(head->next,value);
}
node * findRecursiveLast(node * head,int value){
    if(head==NULL){
        return NULL;
    }
    cout<<head->data<<endl;
    node * temp = findRecursiveLast(head->next,value);
    if(temp){
        return temp;
    }
    if(head->data==value){
        return head;
    }
    return NULL;
}

int main(){
node * head = NULL;
//print(head);
createll2(head);
print(head);
node * it1 = findRecursiveFront(head,4);
cout<<endl;
node * it = findRecursiveLast(head,4);
/*
insertAtTop(&head,12);
print(head);
insertAtPositionK(&head,20,0);
insertAtPositionK(&head,10,4);
print(head);
deleteAtPositionK(&head,0);
print(head);
deleteAtPositionK(&head,1);
print(head);
deleteAtPositionK(&head,4);
print(head);
*/
}
