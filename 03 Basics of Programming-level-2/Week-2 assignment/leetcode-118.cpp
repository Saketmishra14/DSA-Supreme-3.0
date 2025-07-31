//leetcode : 118. Pascal's Triangle

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
     
     //create 2d array
     vector<vector<int>> triangle;
        for(int i=0;i<numRows;i++){
            vector<int >row(i+1,1);
            for(int j=1;j<i;j++){
             row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
            triangle.push_back(row);
        }
        return triangle;
    }
};