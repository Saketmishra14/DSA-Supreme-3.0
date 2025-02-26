#include<iostream>
#include<vector>
using namespace std;

int peakindex(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }

    }
    return e;
}
int main(){
    int arr []= {1, 3, 7, 12, 9, 5, 2}  ;
    int size=7;
    int result=peakindex(arr,size);
    cout<<"peak index of the given array is-:"<<result;
    return 0;
}