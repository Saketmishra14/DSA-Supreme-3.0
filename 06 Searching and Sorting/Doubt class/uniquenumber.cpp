#include<iostream>
using namespace std;
int finduniquenumber(int arr[],int n){
    int i=0;
    int ans;
    
        if (i+1<n && arr[i]==arr[i+1])
        {
            i=i+2; 
        }
        else{
            ans=arr[i] ;

        }
        return ans;
        
    }

int main(){
    int arr[]={1,1,2,2,3,3,4,4,5};
    int n=9;
    int result=finduniquenumber(arr,n);
    cout<<"unique number is -:"<<arr[result];


    
    return 0;
}