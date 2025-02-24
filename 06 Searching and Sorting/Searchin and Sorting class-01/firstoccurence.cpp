#include<iostream>
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
int main(){
    int arr[]={10,20,20,20,20,20,29,30,40,50,60};
    int n=11;
    int target=20;
    int ansindex=-1;
    firstoccurence(arr,n,target,ansindex);
    cout<<"first occurence is -:"<<ansindex;
    return 0;
}