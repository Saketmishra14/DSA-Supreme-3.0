#include<iostream>
using namespace std;
void printalltriplets(int arr[],int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++){
            for (int k = 0; k < n; k++)
            {
                cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
                count++;
            }
            
        }
    }
    cout<<"Total Triplet Printed -:"<<count;
    
    
}
int main(){
    int arr[]={10,20,30,40};
    int size=4;
    printalltriplets(arr,size);

    return 0;
}