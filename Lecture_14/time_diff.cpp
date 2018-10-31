#include<iostream>
using namespace std;
struct TIME{
    int seconds;
    int minutes;
    int hours;
};
void printTime(TIME t){
cout<<t.hours<<" : "<<t.minutes<<" : "<<t.seconds<<endl;
return;
}
void inputTime(TIME * t){
    cout<<"Enter hours,mins,seconds"<<endl;
    cin>>t->hours;
    cin>>(*t).minutes;
    cin>>t->seconds;
    //printTime(t);
}
TIME diff(TIME t1,TIME t2){
    TIME d;
    if(t2.seconds>t1.seconds){
        t1.minutes--;
        t1.seconds+=60;
    }
    d.seconds = t1.seconds-t2.seconds;
    if(t2.minutes>t1.minutes){
        t1.hours--;
        t1.minutes+=60;
    }
    d.minutes = t1.minutes-t2.minutes;
    d.hours = t1.hours - t2.hours;

    return d;
}
int main(){
TIME t1,t2,d;
inputTime(&t1);
inputTime(&t2);
printTime(t1);
printTime(t2);
d = diff(t1,t2);
printTime(d);
}
