#include<iostream>
using namespace std;
void print_digit(int n){
    switch(n){
    case 0:
        cout<<"zero"<<endl;
        break;
    case 1:
        cout<<"one"<<endl;
        break;
    case 2:
        cout<<"two"<<endl;
        break;
    case 3:
        cout<<"three"<<endl;
        break;
    case 4:
        cout<<"four"<<endl;
        break;
     case 5:
        cout<<"five"<<endl;
        break;
    case 6:
        cout<<"six"<<endl;
        break;
    case 7:
        cout<<"seven"<<endl;
        break;
    case 8:
        cout<<"eight"<<endl;
        break;
    case 9:
        cout<<"nine"<<endl;
        break;
    default:
        break;
    }
    return;
}
void print_num(int n){
    if(n==0){
        return;
    }
    print_num(n/10);
    print_digit(n%10);
    return;
}
int main(){
print_num(4051);
}
