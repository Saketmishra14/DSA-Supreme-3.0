//gfg -: Two Sum - Pair with Given Sum

class Solution {
  public:
  
  
  //method -:1. T.C=o(n2)
    bool Twosumsolve(vector<int>& arr, int target){
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]+arr[j]==target) return true;
            }
        }
        return false;
    }
    
    //method -:2. T.C=o(n) Two  pointer approach
    
    bool Twosum(vector<int>& arr, int target){
        //sort the array
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int j=n-1;
        int i=0;
        while(j>i){
            if(arr[i]+arr[j]==target) return true;
            
            else if(arr[i]+arr[j]<target) i++;
            
            else{
                j--;
            }
            
        }
        return false;
        
        
    }
    bool twoSum(vector<int>& arr, int target) {
        // code here
        return Twosum(arr,target);
    }
};