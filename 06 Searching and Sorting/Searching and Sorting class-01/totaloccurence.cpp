#include<iostream>
#include<vector>
using namespace std;
void firstoccurence(int arr[],int n,int target,int &ansindex){
    int s=0;
    int e=n-1;
    
    while(s<=e){
        int mid=s+(e-s)/2;
        
        if(arr[mid]==target){
            ansindex=mid;
            e=mid-1;
        }

        else if(target<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;

        }
        

    }
}
void lastoccurence(int arr[],int n,int target,int &ansindex){
    int s=0;
    int e=n-1;
    
    while(s<=e){
        int mid=s+(e-s)/2;
        
        if(arr[mid]==target){
            ansindex=mid;
            s=mid+1;
        }

        else if(target<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;

        }
        

    }
    
}
int main(){
    int arr[]={10,20,20,20,20,20,20,30,40,50,60};
    int n=11;
    int target=20;
    int firstoccindex=-1;
    firstoccurence(arr,n,target,firstoccindex);
    int lastoccindex=-1;
    lastoccurence(arr,n,target,lastoccindex);
    cout<<"total occurence is -:"<<lastoccindex-firstoccindex+1;
    return 0;
}