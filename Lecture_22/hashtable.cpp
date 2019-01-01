#include<iostream>
using namespace std;
template<typename T>
struct node{
    string key;
    T value;
    node * next;

    node(string key,T value){
        this->key = key;
        this->value = value;
    }
};
template <typename T>
class hashtable{
    node<T> ** table;
    int ts;
    int cs;
    int hashFn(string key){
       int l = key.length();
       int p = 1;
       int ans = 0;
       for(int i=0;i<l;i++){
            ans+=key[i]*p;
            p = p*37;
            p = p%ts;
            ans = ans%ts;
       }
       return ans;
    }
public:
    hashtable(int size=7){
        ts = size;
        cs = 0;
        table = new node<T> * [size];
        for(int i=0;i<ts;i++){
            table[i] = NULL;
        }
    }
    void insert(string key,T value){
        int index = hashFn(key);
        node<T> * temp = new node<T>(key,value);
        temp->next = table[index];
        table[index] = temp;
        cs++;
    }
    T* find(string key){
        int index = hashFn(key);
        node<T> * head = table[index];
        while(head){
            if(head->key==key){
                return &(head->value);
            }
            head = head->next;
        }
        return NULL;
    }
    void erase(string key){
        int index = hashFn(key);
        node<T> * head = table[index];
        node<T> * parent = NULL;
        while(head){
            if(head->key==key){
                if(parent==NULL){
                    table[index] = head->next;
                    cs--;
                    delete head;
                    return;
                }
                parent->next = head->next;
                cs--;
                delete head;
                return;
            }
            parent = head;
            head = head->next;
        }
        return;
    }
    void print(){
        for(int i=0;i<ts;i++){
            node<T> * head = table[i];
            cout<<i<<"-->";
            while(head){
                cout<<head->key<<"-->";
                head = head->next;
            }
            cout<<"NULL"<<endl;
        }
    }
};
int main(){
hashtable<int> h;
h.insert("abc",1);
h.insert("wefwe",1);
h.insert("dsvd",1);
h.insert("asn",1);
h.insert("efe",1);
h.insert("vdd",1);
h.insert("eeq",1);
h.print();
h.erase("eeq");
h.print();

}





