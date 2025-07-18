//leetcode: 215. Kth Largest Element in an Array

//solving using max heap
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> heap;
         // Fixed loop
        for(int i=0;i<nums.size();i++){
            heap.push(nums[i]);
        }
        // Pop k - 1 elements
        for(int i=0;i<k-1;i++){
            heap.pop();
        }
        // Now this is the k-th largest
        int ans=heap.top();
        return ans;  
    }
};

//solving using min heap appraoch
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //min heap
        priority_queue<int,vector<int>,greater<int>> heap;
        //now make k size of heap tree
        for(int i=0;i<k;i++){
            heap.push(nums[i]);
        }
        //ab yha pai k size ka heap bn chuka hai 
        //ab nums[k] sai lke nums.size() tk ka loop lenge 
        //or heap.top() ko compare krwayenge nums mai present element sai
        //agar element bda hoga to heap kai top ko pop krwa ke element push kr denge
        for(int i=k;i<nums.size();i++){
            int element=nums[i];
            if(element>heap.top()){
                heap.pop();
                heap.push(element);
            }
        }
        //yha pai mra kth largest element heap ke top pai hoga mtlb first index pai
        int ans=heap.top();
        return ans;
    
    }
};