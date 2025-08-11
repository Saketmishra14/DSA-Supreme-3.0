//leetcode -:75. Sort Colors


class Solution {
public:

 void countsolve(vector<int>& nums){
    int one,two,zero;
    one=two=zero=0;
    //for zero 
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0) zero++;
         else if(nums[i]==1) one++;
         else {
            two++;
         }
    }
       //spread
       int i=0;
       while(zero--){
        nums[i]=0;
        i++;
       }
       while(one--){
        nums[i]=1;
        i++;
       }
       while(two--){
        nums[i]=2;
        i++;
       }
 }

 //three pointer approach 
    void Sortcolorsolve(vector<int>& nums){
        int low,mid;
        low=mid=0;
        int high=nums.size()-1;

        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                mid++;
                low++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
    void sortColors(vector<int>& nums) {
        Sortcolorsolve(nums);
        
    }
};