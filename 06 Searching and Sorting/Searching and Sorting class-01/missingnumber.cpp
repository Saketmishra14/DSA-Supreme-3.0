#include<iostream>
#include<vector>
using namespace std;
int missingnumber(int arr[],int n,int &misnumber){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]-mid==0){
            //missing number in right
            s=mid+1;
        }
        else{
            misnumber=mid;
            e=mid-1;
        }
    }
}
int main(){
    int arr[]={0,1,2,3,5,6,7,8};
    int n=8;
    int misnumber=-1;
    missingnumber(arr,n,misnumber);
    cout<<"missing element is -:"<<misnumber;

    return 0;
}