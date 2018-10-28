#include<iostream>
using namespace std;
struct student{
    char name[100];
    int age;
    char gender;
};
int main(){
/*
student s;
//input
cin.getline(s.name,100);
cin>>s.age;
cin>>s.gender;

//output
cout<<s.name<<endl;
cout<<s.age<<endl;
cout<<s.gender<<endl;
*/
student sarr[10];
for(int i=0;i<3;i++){
    cin.getline(sarr[i].name,100);
    cin>>sarr[i].age;
    cin>>sarr[i].gender;
    cin.get();
}
for(int i=0;i<3;i++){
    cout<<"Students are "<<endl;
    cout<<sarr[i].name<<endl;
    cout<<sarr[i].age<<endl;
    cout<<sarr[i].gender<<endl;
}
}
