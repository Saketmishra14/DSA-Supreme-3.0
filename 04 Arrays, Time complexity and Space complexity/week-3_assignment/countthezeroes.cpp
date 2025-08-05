//gfg -:Count the Zeros
// User function template for C++

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1) break;
            count++;
        }
        return count;
    }
};