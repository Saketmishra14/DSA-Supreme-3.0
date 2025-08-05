//gfg -: Segregate 0s and 1s

// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int count=0;

        for(int i=0;i<arr.size();i++){
            if(arr[i]==0) count++;
        }
        int n=count;
        
        for(int i=0;i<count;i++){
            arr[i]=0;
        }
        for(int i=n;i<arr.size();i++){
            arr[i]=1;
            
        }
    }
};