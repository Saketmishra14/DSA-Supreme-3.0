#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;
class Graph{
    public:
    // first int: u,
    // second int: v,
    // third int: wt
    unordered_map<int, list<pair<int,int>>> adjList;

    void addEdge(int u,int v,int weight,bool direction){
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

    //BFS traversal
    void bfsTraversal(int src){
        queue<int> q;
        unordered_map<int,bool> visited;

        // initial state maintain
        q.push(src);
        visited[src]=true;

        while(!q.empty()){
            int frontNode=q.front();
            cout<<frontNode<<",";
            q.pop();
            for(auto neighbour:adjList[frontNode]){
                // neighbour: pair
                // first->node; second->weight
                int node=neighbour.first;
                int weight=neighbour.second;
                if(!visited[node]){
                    q.push(node);
                    visited[node]=true;
                }


            }
        }
        cout<<endl;
    }


    void dfsHelper(int src,unordered_map<int,bool> &visited){
        visited[src]=true;
        cout<<src<<",";
        for(auto nbr:adjList[src]){
         // neighbour: pair
            // first: node; second: weight
            int node = nbr.first;
            if(!visited[node]){
                dfsHelper(node,visited);
            }

        }
        
    }

    //DFS traversal
    void dfsTraversal(int n){
        unordered_map<int,bool> visited;
        for(int src=0;src<n;src++){
            if(!visited[src]) dfsHelper(src,visited);
        }

    }

};
int main(){ 
    Graph g;
    g.addEdge(0,3,3,1);
    g.addEdge(0,5,3,1);
    g.addEdge(0,2,3,1);
    g.addEdge(2,5,3,1);
    g.addEdge(3,5,3,1);
    g.addEdge(5,6,3,1);
    g.addEdge(4,1,3,1);
    g.addEdge(6,1,3,1);
    int n = 7;
    g.PrintadjList(n);
    cout<<endl;
    cout<<"BFS -:";
    g.bfsTraversal(0);
    cout<<endl<<"DFS -:";
    g.dfsTraversal(n);
    
    return 0;
}