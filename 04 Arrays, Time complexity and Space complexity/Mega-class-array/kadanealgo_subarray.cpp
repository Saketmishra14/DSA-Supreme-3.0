#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int kadanealgorithm(vector<int> arr,int n){
    int sum=0;
    int maxi=INT_MIN;
    for(int i=0; i < n; i++){
        sum=sum+arr[i];
        maxi=max(maxi,sum);
        if(sum<0)
        sum=0;
    }
    return maxi;
}
int main(){
    vector<int> arr={5,4,-1,7,8};
    int n=arr.size();
    int result=kadanealgorithm(arr,n);
    cout<<"maximum sum of sub-array is -:"<<result;
    return 0;
}