#include<iostream>
#include<vector>
using namespace std;
//binary search using iterative way 
bool Binarysearch(int arr[],int size,int target){
    int start=0;
    int end=size;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target)
        return true;
        if(arr[mid]<target){
            //search in right
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return false;
}

//binaryserach using recursion
int BinarySearchRecursive(int arr[],int n,int s,int e,int target){

    //base case
    if(s>e) return -1;

    int mid=s+(e-s)/2;
    if(arr[mid]==target) return mid;


    if(target>arr[mid]) return BinarySearchRecursive(arr,n,mid+1,e,target);

    else{
        return BinarySearchRecursive(arr,n,s,mid-1,target);
    }
}

int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int target=90;
    int size=9;
    bool result=Binarysearch(arr,size,target);
    if(result==true){
        cout<<"target is found";
    }
    else{
        cout<<"target is not found.";
    }
    cout<<endl;

    //recursive function call
    int s=0;
    int e=size;
    int index=BinarySearchRecursive(arr,size,s,e,target);
    cout<<"element found at index -:"<<index;
    
    return 0;
}