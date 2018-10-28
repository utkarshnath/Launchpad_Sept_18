#include<iostream>
using namespace std;
struct student{
    char name[100];
    int age;
    char gender;

    student(){
    cout<<"I am default constructor"<<endl;
    }
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
    }
    student(char arr[100],int age){
    cout<<"I am 3rd constructor"<<endl;
        int i=0;
        while(arr[i]){
            name[i] = arr[i];
            i++;
        }
        name[i] = '\0';
        this->age = age;
        gender = 'M';
    }
    student(int a,int b,int n,int c ,int e){
    cout<<"Random constructor"<<endl;
    }
};
int main(){
student s("ABC");
student s1("efwC",23);
student s2;
student s3(1,2,3,4,5);
//output
cout<<s1.name<<endl;
cout<<s1.age<<endl;
cout<<s1.gender<<endl;

}
