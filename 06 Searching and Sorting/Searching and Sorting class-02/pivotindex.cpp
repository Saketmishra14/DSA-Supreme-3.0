#include<iostream>
#include<vector>
using namespace std;
int pivotIndex(vector<int> arr,int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(s==e){
            return s;
        }
        if(mid-1<n && arr[mid]>arr[mid+1]){
            return mid;
        }
        if(arr[s]>arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
            
        }
        mid=s+(e-s)/2;
    }
    return -1;

}
int main(){
    vector<int> arr1={7, 9, 11, 12, 15, 2, 3, 5};
    int n=arr1.size();
    int result=pivotIndex(arr1,n);
    cout<<arr1[result]<<" is the largest element at index "<<result;

    return 0;
}