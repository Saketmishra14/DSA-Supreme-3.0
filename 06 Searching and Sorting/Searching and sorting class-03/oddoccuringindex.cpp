#include<iostream>
using namespace std;
int findoddoccuringElement(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        //for single element
        if(s==e){
            return s;
        }
         //duplicate does'nt exist
         if(mid-1>=0 && arr[mid]!=arr[mid-1] && mid+1<size && arr[mid]!=arr[mid+1]){//index should be valid.
            return mid;
         }
         //duplicate exist in left index
         if(mid-1>=0 && arr[mid]==arr[mid-1]){
            int pairstartingindex=mid-1;
            if(pairstartingindex & 1){
                //pairStartingIndex is odd
                //move left
                e=mid-1;
            }
            else{
                //pairStartingIndex is even
                //move right
                s=mid+1;
            }
         }
         //duplicate exist in right index.
         else if(mid+1<size && arr[mid]==arr[mid+1]){
            int pairstartingindex=mid;
            if(pairstartingindex & 1){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
         }
         mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    int arr[] = {1,1,2,2,3,3,4,5,5,6,6};
    int size=11;

    int ans=findoddoccuringElement(arr,size);
    cout<<"ans Index : "<<ans<<endl;
    cout<<"ans element : "<<arr[ans]<<endl;
    return 0;
}