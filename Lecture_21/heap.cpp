#include<iostream>
#include<vector>
using namespace std;
class Heap{
    vector<int>v;
    void heapify(int i){
        int minIndex = i;
        int left = 2*i;
        int right = 2*i +1;
        if(left<v.size() && v[minIndex] > v[left]){
            minIndex = left;
        }
        if(right<v.size() && v[minIndex] > v[right]){
            minIndex = right;
        }
        if(minIndex!=i){
            swap(v[i],v[minIndex]);
            heapify(minIndex);
        }
    }
public:
    Heap(){
        v.push_back(-1);
    }

    void addElement(int data){
        v.push_back(data);
        int index = v.size()-1;
        while(index>1 && v[index/2]>v[index]){
            swap(v[index/2],v[index]);
            index = index/2;
        }
    }

    bool isEmpty(){
        return v.size()==1;
    }

    int min(){
        if(isEmpty()){
            return -1;
        }
        return v[1];
    }


    int removeMin(){
        int top = v[1];
        v[1] = v[v.size()-1];
        v.pop_back();
        heapify(1);
        return top;
    }
    void print(){
        for(int i=1;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
Heap p;
p.addElement(4);p.addElement(1);p.addElement(5);
p.addElement(7);p.addElement(2);p.addElement(3);
p.print();
cout<<p.removeMin();
p.print();
cout<<p.removeMin();
p.print();
}
