#include<iostream>
#include<list>
#include<queue>
using namespace std;
class graph{
    int V;  // count of vertex
    list<int>* l;
public:
    graph(int v){
        V = v;
        l = new list<int> [v];
    }
    void addEdge(int u,int v, bool bidir = true){
        l[u].push_back(v);
        if(bidir){
           l[v].push_back(u);
        }
    }
    void  bfs(int vertex){
        //bool * visited = new bool[100];
        bool visited[100] = {0};
        for(int i=0;i<V;i++){
            visited[i] = false;
        }
        queue<int> q;
        q.push(vertex);
        visited[vertex] = true;
        while(!q.empty()){
            int top = q.front();
            q.pop();
            cout<<top<<" ";
            list<int>:: iterator it;
            for(it=l[top].begin();it!=l[top].end();it++){
                if(visited[*it]==false){
                    q.push(*it);
                    visited[*it] = true;
                }
            }
        }
    }

    void bfsDist(int vertex){
        bool visited[100] = {0};
        int dist[100];
        for(int i=0;i<V;i++){
            dist[i] = INT_MAX;
        }
        queue<int> q;
        q.push(vertex);
        visited[vertex] = true;
        dist[vertex] = 0;
        while(!q.empty()){
            int top = q.front();
            q.pop();
            list<int>::iterator it;
            for(it =l[top].begin();it!=l[top].end;it++){
                if(visited[*it]==false){
                    dist[*it] = dist[top] + 1;
                    q.push(*it);
                    visited[*it] = true;
                }
            }
        }
    }

    void dfsDriver(int vertex,bool visited[100]){
        if(visited[vertex]){
            return;
        }
        cout<<vertex<<" ";
        visited[vertex] = true;
        list<int>:: iterator it;
            for(it=l[vertex].begin();it!=l[vertex].end();it++){
                dfsDriver(*it,visited);
            }
        return;
    }
    void dfs(){
        bool visited[100] = {0};
        for(int i=0;i<V;i++){
            dfsDriver(i,visited);
        }
    }
    void print(){
        for(int i=0;i<V;i++){
            cout<<i<<" => ";
            list<int>:: iterator it;
            for(it=l[i].begin();it!=l[i].end();it++){
                cout<<*it<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
graph g(7);
g.addEdge(0,1);
g.addEdge(0,2);
g.addEdge(0,3);
g.addEdge(1,4);
g.addEdge(2,3);
g.addEdge(2,4);
g.addEdge(3,4);
g.addEdge(5,6);

g.bfs(0);
cout<<endl;
g.dfs();
//g.print();
}
