#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
// leetcode 51: N-Queens
class Solution {
public:
     unordered_map<int,bool> rowCheck;
    unordered_map<int,bool> lowerDiagonalCheck;
    unordered_map<int,bool> upperDiagonalCheck;


void Storesolution(vector<vector<string>>&ans,vector<vector<char> >&board,int n){
    vector<string> tempans;
    for(int i=0;i<n;i++){
        string output="";
        for(int j=0;j<n;j++){
            output.push_back(board[i][j]);

        }
          //string is ready
            tempans.push_back(output);
    }
    ans.push_back(tempans);
}
 bool issafe(int row, int col, vector<vector<char> >&board){
        //brute force -> traverse board-> TC: n^2
        // TC:O(1)
        //check for row
       if( rowCheck[row]==true) return false;

       //for upper diagonal 
       if(upperDiagonalCheck[row-col]==true) return false;
               // check for lower diagonal
        if(lowerDiagonalCheck[row+col]==true) return false;
        else return true;
        }
void solve(int n, vector<vector<char> >&board, vector<vector<string>>&ans,int col){
    //base case
    if(col>=n){
         //all queens are placed
            //store board arrangement in ans
            Storesolution(ans,board,n);
            return ;
    }
     //we have col index, in which row do we have to place queen in that column
     for(int row=0;row<n;row++){
          // har row par queen ko place krke dekhna
          if(issafe(row,col,board)){
            board[row][col]='Q';
             rowCheck[row]=true;
                lowerDiagonalCheck[row+col]=true;
                upperDiagonalCheck[row-col]=true;
                // recursion
                 solve(n, board, ans, col+1);

                  //backtrack
                board[row][col]='.';
                rowCheck[row]=false;
                lowerDiagonalCheck[row+col]=false;
                upperDiagonalCheck[row-col]=false;

          }
     }
}

 vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> ans;
    //board
        vector<vector<char> > board(n, vector<char>(n, '.'));
        //start placing queen with 0th column
        int col=0;
       solve(n,board,ans,col);
        return ans;
 }
};