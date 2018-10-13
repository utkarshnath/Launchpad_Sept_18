#include<iostream>
using namespace std;
int main(){
int arr[2][3] = {{1,2,3},
                {4,5,6}};
int row = 2;
int col = 3;


for(int i=0;i<col;i++){
    for(int j=0;j<row;j++){
        //cout<<i<<" "<<j<<endl;
        if(i%2==0){
            cout<<arr[j][i]<<endl;
        }else{
            cout<<arr[row-1-j][i]<<endl;
        }

    }
}

}
