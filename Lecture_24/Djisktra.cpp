#include<iostream>
#include<list>
#include<queue>
#include<stack>
#include<unordered_map>
using namespace std;
class graph{
    int V;
    unordered_map<int, list<pair<int,int> > > m;

public:
    graph(int v){
        V = v;
    }

    void addEdge(int src,int dest,int weight,bool biDir=false){
        m[src].push_back(make_pair(dest,weight));
        if(biDir){
            m[dest].push_back(make_pair(src,weight));
        }
    }

    void print(){
        //unordered_map<int, list<pair<int,int> > > :: iterator it;
        for(auto mapit=m.begin();mapit!=m.end();mapit++){
            cout<<mapit->first<<"--> ";
            auto l = mapit->second;
            for(auto listit=l.begin();listit!=l.end();listit++){
                cout<<listit->first<<" "<<listit->second<<" --> ";
            }
            cout<<"END"<<endl;
        }
    }
};

int main(){
    graph g(9);
    g.addEdge(0,1,4);
    g.addEdge(0,7,8);
    g.addEdge(1,2,8);
    g.addEdge(1,7,11);
    g.print();

}
