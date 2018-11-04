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
node * findAtPositionK(node *  head,int k){
    while(k--){
        head = head->next;
    }
    return head;
}
void swapNode(node ** head,int i,int j){
    if(i==0 && j==1){
        // fill this
        node * temp = *head;
        *head = temp->next;
        temp->next = (*head)->next;
        (*head)->next = temp;
        return;
    }
    if(i==0){
        node * parent = findAtPositionK(*head,j-1);
        node * a = *head;
        node * b = parent->next;
        node * temp = b->next;
        b->next = a->next;
        a->next = temp;
        parent->next = *head;
        *head = b;
        return;
    }
    if(j-i==1){
        node * parent = findAtPositionK(*head,i-1);
        node * a = parent->next;
        node * b = a->next;
        parent->next = b;
        node * temp = b->next;
        b->next = a;
        a->next = temp;
        return;
    }

    node * parent1 = findAtPositionK(*head,i-1);
    node * parent2 = findAtPositionK(*head,j-1);
    node * a  = parent1->next;
    node * b = parent2->next;
    parent1->next = b;
    node * temp = b->next;
     b->next = a->next;
     a->next = temp;
     parent2->next = a;
}
void bubbleSort(node** head){
    int n = length(*head);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            node *a = findAtPositionK(*head,j);
            node *b = a->next;
            if(a->data > b->data){
                swapNode(head,j,j+1);
            }
        }
    }
}
node * kthElementFromLast(node * head,int k){
    static int i = k;
    if(head==NULL){
        return NULL;
    }
    node * it = kthElementFromLast(head->next,k);
    if(it){
        return it;
    }
    if(i==0){
        return head;
    }
    i--;
    return NULL;
}
node * mergeLL(node * head1,node * head2){
    if(head1==NULL && head2==NULL){
        return NULL;
    }
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    node * head;
    if(head1->data < head2->data){
        head = head1;
        head1 = head1->next;
    }else{
        head = head2;
        head2 = head2->next;
    }
    node * it = head;
    while(head1 && head2){
        if(head1->data < head2->data){
            it->next = head1;
            head1 = head1->next;
            it = it->next;
        }else{
            it->next = head2;
            head2 = head2->next;
            it = it->next;
        }
    }
    if(head1){
        it->next = head1;
    }
    else{
        it->next = head2;
    }
    return head;
}
int main(){
node * head1 = NULL;
node * head2 = NULL;
//print(head);
createll2(head1);
print(head1);
createll2(head2);
print(head2);
node * head3 = mergeLL(head1,head2);
print(head3);

//bubbleSort(&head);
//int n = 2;
//node * it = kthElementFromLast(head,n);
//cout<<it->data<<endl;
//print(head);
/*
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
