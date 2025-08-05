//gfg -: Largest Element in Array
class Solution {
  public:
  int solve(vector<int> &arr){
      int lar=INT_MIN;
      for(int i=0;i<arr.size();i++){
          int val=arr[i];
          lar=max(lar,val);
      }
      return lar;
  }
    int largest(vector<int> &arr) {
        // code here
        return solve(arr);
        
    }
};
