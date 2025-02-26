#include<iostream>
using namespace std;
//when ever time-complexity is give o(log n) use binary search 
int binarysearch(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==target){
            return mid;
        }

        else if(target<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;

        }

    }
    return -1;
}
int main(){
    int arr[]={10,20,22,24,26,27,29,30,40,50,60};
    int n=11;
    int target=20;
    int result=binarysearch(arr,n,target);
    if(result==-1){
        cout<<"target is not found.";
    }
    else{
        cout<<"target is found at index -:"<<result;
    }

    return 0;
}