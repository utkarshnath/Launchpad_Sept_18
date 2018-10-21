#include<iostream>
using namespace std;
bool is_safe(int arr[100][100],int n,int x,int y){
    for(int i=x+1,j=y;i<n;i++){
        if(arr[i][j]==1){
            return false;
        }
    }
    for(int i=x-1,j=y;i>=0;i--){
        if(arr[i][j]==1){
            return false;
        }
    }
    for(int i=x,j=y+1;j<n;j++){
        if(arr[i][j]==1){
            return false;
        }
    }
    for(int i=x,j=y-1;j>=0;j--){
        if(arr[i][j]==1){
            return false;
        }
    }
    for(int i=x+1,j=y+1;i<n && j<n;i++,j++){
        if(arr[i][j]==1){
            return false;
        }
    }
    for(int i=x-1,j=y+1;i>=0 && j<n;i--,j++){
        if(arr[i][j]==1){
            return false;
        }
    }
    for(int i=x+1,j=y-1;x<n && j>=0;i++,j--){
        if(arr[i][j]==1){
            return false;
        }
    }
    for(int i=x-1,j=y-1;i>=0 &&j>=0;i--,j--){
        if(arr[i][j]==1){
            return false;
        }
    }

    return true;
}

int nqueens(int arr[100][100],int n,int x,int y){
    if(y==n){
        cout<<"****************************"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"****************************"<<endl;
        return 1;
    }
    int number = 0;
    for(int i=0;i<n;i++){
        if(is_safe(arr,n,i,y)){
            arr[i][y] = 1;
            number+=nqueens(arr,n,0,y+1);
            /*
            bool done = nqueens(arr,n,0,y+1);
            if(done){
                return true;
            }
            */
            arr[i][y] = 0;
        }
    }
    return number;
}
int main(){
int arr[100][100] = {0};
cout<<nqueens(arr,8,0,0)<<endl;;
}
