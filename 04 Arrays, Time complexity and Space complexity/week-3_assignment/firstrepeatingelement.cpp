//gfg-: first repeating element 
class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        // code here
        // for(int i=0;i<arr.size();i++){
        //     bool isrepeated=false;
        //     for(int j=i+1;j<arr.size();j++){
        //         if(arr[i]==arr[j]){
        //             isrepeated =true;
        //             return i+1;
        //         }
        //     }
        // }
        
        unordered_map<int,int> hash;
        for(int i=0;i<arr.size();i++){
            hash[arr[i]]++;
        }
        for(int i=0;i<arr.size();i++){
            if(hash[arr[i]]>1) return i+1;
        }
        return -1;
    }
};