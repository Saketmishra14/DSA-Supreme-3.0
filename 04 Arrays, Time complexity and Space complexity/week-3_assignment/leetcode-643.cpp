//leetcode -:643. Maximum Average Subarray I

class Solution {
public:
//method-1.
    double Brutefor(vector<int>& nums, int k){
        int maxsum=INT_MIN;
        int i=0,j=k-1;

        while(j<nums.size()){
            int sum=0;
            for(int y=i;y<=j;y++){
                sum +=nums[y];
            }
           maxsum= max(maxsum,sum);
           i++;
           j++;
        }
        //type cast krdo ek value ko
        return maxsum/(double)k;
    }

    //method -:2
    //double sliding window pattern
    double Slidingsolve(vector<int>& nums, int k){
        int i=0,j=k-1,sum=0;
        for(int y=i;y<=j;y++){
            sum +=nums[y];
        }
        int maxsum=sum;
        j++;
        while(j<nums.size()){
            sum =sum-nums[i++];
            sum=sum+nums[j++];
            maxsum=max(maxsum,sum);
        }
        return maxsum/(double)k;
    }

    double findMaxAverage(vector<int>& nums, int k) {
        return Slidingsolve(nums,k);
        
    }
};

