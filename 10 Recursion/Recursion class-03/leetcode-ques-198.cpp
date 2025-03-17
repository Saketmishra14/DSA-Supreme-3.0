#include<iostream>
#include<vector>
using namespace std;
int Solve(int nums[],int size,int index){
    //base case
    if(index>=size){
        return 0;
    }

    //include function call
    int includeVal=nums[index]+Solve(nums,size,index+2);

    //exclude function call
    int excludeVal= 0 + Solve(nums,size,index+1);

    int finalVal=max(includeVal,excludeVal);
    
    return finalVal;

}
int main(){
     int nums[] = {2,7,9,3,1};
    int size=sizeof(nums)/sizeof(nums[0]);
    int index=0;

    int result=Solve(nums,size,index);
    cout<<"the maximum amout is house robber is -:"<<result<<endl;
   

    
    return 0;
}