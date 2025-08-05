//gft -: Reverse an Array

class Solution {
  public:
  
  
  //method -:1 T.C=o(n)
  void ReverseArray(vector<int> &arr){
       // Initialize left to the beginning and right to the end
      int left=0;
      int right=arr.size()-1;
      
      while(left<right){
    // Swap the elements at left and right position
          swap(arr[left],arr[right]);
          
           // Increment the left pointer
          left++;
          // Decrement the right pointer
          right--;
      }
  }
  
  void reverseArray(vector<int> &arr) {
        // code here
        ReverseArray(arr);
    }
};