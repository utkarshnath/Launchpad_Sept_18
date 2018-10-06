#include<iostream>
using namespace std;
int main(){
char a = cin.get();
int word_count = 0;
int line_count = 0;
int curr_word_length = 0;
while(a!='$'){
    if(a==' ' || a=='\t'){
        if(curr_word_length>0){
            word_count++;
            curr_word_length = 0;
        }
    }
    else if(a=='\n'){
        line_count++;
        if(curr_word_length>0){
            word_count++;
            curr_word_length = 0;
        }
    }else{
        curr_word_length++;
    }
    a = cin.get();
}
if(curr_word_length>0){
    word_count++;
    }
cout<<word_count<<endl;
cout<<line_count+1<<endl;
}
