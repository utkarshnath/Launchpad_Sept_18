#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<char>s;
char arr[100] =  "[{}]";
int i=0;
while(arr[i]!='\0'){
    if(arr[i]=='(' || arr[i]=='[' || arr[i]=='{'){
        s.push(arr[i]);
        i++;
        continue;
       }
       if(s.empty()){
            cout<<"NOT"<<endl;
            return 0;
       }
       char top = s.top();
       if( (arr[i]=='}' && top=='{') || (arr[i]==']' && top=='[') || (arr[i]==')' && top=='(') ){
            s.pop();
            i++;
            continue;
       }
       cout<<"NOT"<<endl;
       return 0;
}
if(s.empty()){
    cout<<"YES"<<endl;
}else{
    cout<<"NOT"<<endl;
}


}
