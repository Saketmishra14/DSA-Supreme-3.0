#include<iostream>
using namespace std;
void sortzeroone(int arr[],int n){
    int l=0;
    int h=n-1;
    while(l<h){
        if(arr[l]==0){
            l++;
        }
        else if(arr[h]==1){
            h--;
        }
        else{
            swap(arr[l],arr[h]);
        }
    }
    cout<<"sorted array is -:";
    for(int i=0;i<n;i++){
       cout<<arr[i]<<",";
    }
}

int main(){
    int arr[]={0,1,0,1,1,1,0,0,0};
    int n=9;
    sortzeroone(arr,n);
    


    return 0;
}