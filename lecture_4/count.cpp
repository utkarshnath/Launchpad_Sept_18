#include<iostream>
using namespace std;
int main(){
char a;

a = cin.get();
int digit_count=0;
int space_count=0;
int alpha_count=0;
int ch_count=0;
while(a!='$'){
        cout<<a<<endl;
    if(a>='0' && a<='9'){
        digit_count++;
    }
    else if(a==' ' || a=='\t' || a=='\n'){
        space_count++;
    }
    else if((a>='A' && a<='Z') || (a>='a' && a<='z')){
        alpha_count++;
    }
    ch_count++;
    a = cin.get();
}
cout<<digit_count<<endl;
cout<<space_count<<endl;
cout<<alpha_count<<endl;
cout<<ch_count<<endl;
}
