#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
class Graph{
    public:
    unordered_map<int, list<int>> adjList;

    void addedge(int u,int v,bool direction){
        //direction->0 undirected graph
        //direction->1 directed graph
        if(direction==0){
            adjList[u].push_back(u);
            adjList[v].push_back(v);
        }
        else{
            adjList[u].push_back(v);
        }
    }

    void PrintadjList(int n){
        for(int i=0;i<n;i++){
            cout<<i<<" :";
            cout<<"{";
            list<int> temp=adjList[i];
            for(auto j:temp){
                cout<<j<<",";
            }
            cout<<"}"<<endl;
        }

        //second method to print graph usign stl
        // for(auto i:adjList){
        //     cout<<i.first<<":";
        //     cout<<"{";
        //     for(auto j: i.second){
        //         cout<<j<<",";
        //     }
        //     cout<<"}"<<endl;
        // }
    }

};
int main(){ 
    Graph g;
    g.addedge(0,1,1);
    g.addedge(0,2,1);
    g.addedge(1,2,1);
    g.addedge(2,3,1);
    g.PrintadjList(4);

    return 0;
}