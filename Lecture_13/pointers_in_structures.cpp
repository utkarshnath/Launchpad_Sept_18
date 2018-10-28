#include<iostream>
using namespace std;
struct location{
    char street[100];
    int pincode;
    location(){
        cout<<"location constructor"<<endl;
    street[0] = 'A';
    street[1] = 'B';
    street[2] = '\0';
    pincode  = 123;
    }
};
struct student{
    char name[100];
    int age;
    char gender;
    location * adr;

    student(char arr[100]){
        cout<<"I ma 2nd constructor"<<endl;
        int i=0;
        while(arr[i]){
            name[i] = arr[i];
            i++;
        }
        name[i] = '\0';
        age = 0;
        gender = 'M';
        adr = 0;
    }
};
void print_student(student s){
    cout<<s.name<<endl;
    cout<<s.age<<endl;
    cout<<s.gender<<endl;
    cout<<(*(s.adr)).street<<endl;
    cout<<s.adr->street<<endl;
    cout<<(*s.adr).pincode<<endl;
    cout<<s.adr->pincode<<endl;
}
int main(){
student s("RAM");
//location a;      static memory allocation
location * a = new location;   // dynamic memory allocation
cout<<(*a).street<<endl;
cout<<a->street<<endl;
cout<<(*a).pincode<<endl;
cout<<a->pincode<<endl;
s.adr = a;
print_student(s);
}
