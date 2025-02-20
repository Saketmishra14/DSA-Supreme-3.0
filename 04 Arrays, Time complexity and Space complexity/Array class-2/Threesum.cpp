#include<iostream>
using namespace std;
void printthreesum(int arr[],int n,int target){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++){
            for (int k = 0; k < n; k++)
            {
               if(arr[i]+arr[j]+arr[k]==target){
                cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
               }
            }
            
        }
    }
    
}
int main(){
    int arr[]={10,20,30,40};
    int target=80;
    int size=4;
    printthreesum(arr,size,target);

    return 0;
}