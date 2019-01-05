#include<iostream>
#include<map>
using namespace std;
map<int,vector<int> >m;
void insertInMap(node * root,int value){
    if(root==NULL){
        return;
    }

    m[value].push_back(root->data);
    insertInMap(root->left,value-1);
    insertInMap(root->right,value+1);
    return;
}
void print(){
    map<int,vector<int> >:: iterator it;
    for(it = m.begin();it!=m.end();it++){
        for(int i=0;i<it->second.size();i++){
            cout<< it->second[i];
        }
        cout<<endl;
    }
}
int main(){

}
