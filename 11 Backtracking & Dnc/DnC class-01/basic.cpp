#include<iostream>
#include<vector>
using namespace std;
void Mergesort(int arr[],int brr[],int arrsize,int brrsize,vector<int>&ans){
    //take two index 
    //i->for arr
    //j->for brr
    int i=0;
    int j=0;
    while(i<arrsize && j<brrsize){
        if(arr[i]>brr[j]){
            ans.push_back(brr[j]);
            j++;
        }
        else{
            ans.push_back(arr[i]);
            i++;
        }
    }

    //if j index go out of bound and arr[i] have value then use this
    while(i<arrsize){
        ans.push_back(arr[i]);
        i++;
    }
    //same for i index
    while(j<brrsize){
        ans.push_back(brr[j]);
        j++;
    }
   
}
int main(){
    int arr[]={10,30,50,70};
    int brr[]={20,40,60,70,90,100};
    int arrsize=4;
    int brrsize=6;
    vector<int > ans;
    Mergesort(arr,brr,arrsize,brrsize,ans);
    for(int num:ans){
        cout<<num<<" ";
    }

    return 0;
}