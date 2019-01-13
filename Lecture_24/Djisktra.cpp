#include<iostream>
#include<list>
#include<queue>
#include<stack>
#include<set>
#include<unordered_map>
using namespace std;
class graph{
    int V;
    unordered_map<int, list<pair<int,int> > > m;

public:
    graph(int v){
        V = v;
    }

    void addEdge(int src,int dest,int weight,bool biDir=true){
        m[src].push_back(make_pair(dest,weight));
        if(biDir){
            m[dest].push_back(make_pair(src,weight));
        }
    }

    void shortestPath(int src){
        vector<int > dist;
        for(int i=0;i<V;i++){
            dist.push_back(INT_MAX);
        }
        dist[src] = 0;
        // to find minimum dist
        // dist, value
        set<pair<int,int> >s;
        s.insert(make_pair(0,src));
        while(!s.empty()){
            auto p = s.begin();
            int node = p->second;
            int nodeDist = p->first;

            s.erase(s.begin());

            auto mapit = m.find(node);

            //to handle node with no out edges
            if(mapit==m.end()){
                continue;
            }

            auto l = mapit->second;
            for(auto listit=l.begin();listit!=l.end();listit++){
                int parentDist = dist[node];
                int weight = listit->second;
                if(dist[listit->first] > parentDist+weight){
                    int curr = listit->first;
                    auto f = s.find(make_pair(dist[curr],curr));
                    if(f!=s.end()){
                        s.erase(make_pair(dist[curr],curr));
                    }
                    s.insert(make_pair(parentDist + weight,curr));
                    dist[curr] = parentDist + weight;
                }
            }
        }

        for(int i=0;i<V;i++){
            cout<<i<<"-->"<<dist[i]<<endl;
        }
    }
    void print(){
        //unordered_map<int, list<pair<int,int> > > :: iterator it;
        for(auto mapit=m.begin();mapit!=m.end();mapit++){
            cout<<mapit->first<<"--> ";
            //auto l = mapit->second;
            list<pair<int,int> > l = mapit->second;
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
    g.addEdge(2,8,2);
    g.addEdge(2,3,7);
    g.addEdge(2,5,4);
    g.addEdge(3,4,9);
    g.addEdge(3,5,14);
    g.addEdge(4,5,10);
    g.addEdge(5,6,2);
    g.addEdge(6,7,1);
    g.addEdge(6,8,6);
    g.addEdge(7,8,7);
    g.print();

    g.shortestPath(0);

}
