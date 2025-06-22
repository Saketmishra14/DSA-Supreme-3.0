// gfg : Rat in a Maze Problem-I
//{ Driver Code Starts
// Initial template for C++
#include<iostream>
#include<vector>
using namespace std;
 int countpath=0;
void Solve(int i,int j,string path,int N,vector<vector<int>>&maze,vector<vector<bool>>&visited){
    //base case 
    if(i==N-1 && j==N-1){
         cout<<path<<endl;
     countpath++;
        return;
    }
    //safety check
    //out of bound
    if(i<0 ||j<0||i>=N||j>=N){
        return;
    }
    //visited check 
    //block 
    if(maze[i][j]==0 || visited[i][j]==true){
        return ;
    }
    //mark visited
    visited[i][j]=true;

    //move in all 4 direction 
    //down 
    Solve (i+1,j,path+"D",N,maze,visited);
    //left
    Solve (i,j-1,path+"L",N,maze,visited);
    //right
    Solve(i,j+1,path+"R",N,maze,visited);
    //up
    Solve(i-1,j,path+"U",N,maze,visited);

    //backtrack unmark this cell
    visited[i][j]=false;

}
int main(){
    vector<vector<int>> maze={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    int N=4;
    vector<vector<bool>> visited(N,vector<bool>(N,false));
    string path="";
    int i=0;
    int j=0;
    Solve(i,j,path, N,maze,visited);
    cout<<countpath;
    return 0;
}