#include<iostream>
using namespace std;
//two sum
//print all pairs if pair that sums equal to target exists
bool checkTwoSumPrintAllPairs(int arr[], int n, int target){
    //check all pairs
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            if(arr[i]+arr[j]==target){
               return true;
            }
        }
        
    }
    //target not found in any pair
    return false;
}
int main(){
    int arr[]={10,20,30,40};
    int size=4;
    int target=60;
    bool result=checkTwoSumPrintAllPairs(arr,size,target);
    if (result==true)
    {
        cout<<"pair is exist";
    }
    else{
        cout<<"pair is not exist";
    }
    
    return 0;
} 