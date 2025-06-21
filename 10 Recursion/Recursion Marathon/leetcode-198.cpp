#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

      int Solve(vector<int>&nums,int index,int size){

    //base case
    if(index>=size){
        return 0;
    }
    //Include recursive call
    int IncludeAmoun=nums[index]+Solve(nums,index+2,size);

    //Exclude recursive call
    int ExcludeAmoun=0+Solve(nums,index+1,size);

    return max(IncludeAmoun,ExcludeAmoun);

}
    int rob(vector<int>& nums) {
        int index=0;
        int size=nums.size();
      int ans=  Solve(nums,index,size);
      return ans;
    }
};