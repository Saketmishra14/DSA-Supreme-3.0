#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
class Graph{
    public:
    // first int: u,
    // second int: v,
    // third int: wt
    unordered_map<int, list<pair<int,int>>> adjList;

    void addedge(int u,int v,int weight,bool direction){
        //direction->0 undirected graph
        //direction->1 directed graph
        if(direction==0){
            adjList[u].push_back({u,weight});
            adjList[v].push_back({v,weight});
        }
        else{
            adjList[u].push_back({v,weight});
        }
    }

    void PrintadjList(int n){
        for(int i=0;i<n;i++){
            cout<<i<<" :";
            cout<<"{";
            list<pair<int,int>> temp=adjList[i];
            for(auto j:temp){
             // j is a pair here
                cout<<"("<<j.first<<","<<j.second<<")";
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
    g.addedge(0,1,3,1);
    g.addedge(0,2,4,1);
    g.addedge(1,2,1,1);
    g.addedge(2,3,6,1);
    g.PrintadjList(4);

    return 0;
}