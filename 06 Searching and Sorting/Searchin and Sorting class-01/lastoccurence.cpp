#include<iostream>
using namespace std;
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
    int ansindex=-1;
    lastoccurence(arr,n,target,ansindex);
    if(ansindex==-1){
        cout<<"target not found.";
    }
    else cout<<"last occurence is -:"<<ansindex;
    return 0;
}