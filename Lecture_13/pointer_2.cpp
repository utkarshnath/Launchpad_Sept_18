#include<iostream>
using namespace std;
int main() {
    char s[] = "CodingBlocks";
    char *ptr = s;
    cout<<ptr<<endl;
    while(*ptr!='\0'){
        ++*ptr++;
    }

    cout << s << " --" << ptr << endl;
    return 0;
}

