#include<iostream>
#include<vector>
using namespace std;
int mergesortedarray(int arr[],int arrsize,int brr[],int brrsize,vector<int> &ans){
    int k=0;
    int j=0;

   while(k<arrsize && j<brrsize)
    {
        if(arr[k]>brr[j]){
            ans.push_back(brr[j]);
            j++;

        }
        else{
            ans.push_back(arr[k]);
            k++;
        }
    }
     //2 cases
    //1. elements still left in arr
    while(k<arrsize){
        ans.push_back(arr[k]);
        k++;
    }
    //2. elements still left in brr
    while(j<brrsize){
        ans.push_back(brr[j]);
        j++;
    }
    
};

void merge(int arr[],int s,int e,int mid){
    //create left and right array

    int leftlength=mid-s+1;
    int rightlength=e-mid;
    int *leftarr=new int[leftlength];
    int *rightarr=new int[rightlength];

    //fill and copy the left and right arrays
    //copy orginal array value
    //initialize orginal array index
    int index=s;
    //copy value in left side array
    for(int i=0;i<leftlength;i++){
        leftarr[i]=arr[index];
        index++;
    }
    //copy value in  right side array
    for(int i=0;i<rightlength;i++){
        rightarr[i]=arr[index];
        index++;
    }

    //merge logic
    int i=0;
    int j=0;
    int mainarrayindex=s;
    while(i<leftlength && j<rightlength){
        if(leftarr[i]<rightarr[j]){
            arr[mainarrayindex]=leftarr[i];
            i++;
            mainarrayindex++;
        }
        else{
            arr[mainarrayindex]=rightarr[j];
            j++;
            mainarrayindex++;
        }
    }
    //i have to handle 2 cases discussed above in merge 2 sorted arrays wla question
    while(i<leftlength){
        arr[mainarrayindex]=leftarr[i];
            i++;
            mainarrayindex++;
    }
    while(j<rightlength){
        arr[mainarrayindex]=rightarr[j];
            j++;
            mainarrayindex++;
    }

    //delete heap memory
    delete[] leftarr;
    delete[] rightarr;

}
void mergesort(int arr[],int s,int e){

    //base case
    if(s>=e){
        return ;
    }
    int mid=s+(e-s)/2;
    //left side 
    mergesort(arr,s,mid);

    //right side
    mergesort(arr,mid+1,e);

    //merge both left and right parts
    merge(arr,s,e,mid);


};
int main(){
//    int arr[]={10,30,50,70};
//     int arrsize=4;
//     int brr[]={20,40,60,80,90,100};
//     int brrsize=6;
//     vector<int> ans;
//     mergesortedarray(arr,arrsize,brr,brrsize,ans);
//     for(int num: ans){
   //     cout<<num<<" ";
   // }  

    int arr[] = {0,10,80,110,90,50,30,40,200,0};
    int size = 10;
    int s=0;
    int e=size-1;
    mergesort(arr,s,e);
    for( int i=0; i<size;i++){
        cout<< arr[i]<<" ";
       }
    cout<<endl;
    return 0;
}