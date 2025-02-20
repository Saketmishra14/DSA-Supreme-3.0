#include<iostream>
using namespace std;
void lower(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j<n; j++)
        {
          cout<<arr[i]<<","<<arr[j]<<" ";
        }
        cout<<endl;
        
    }
    
}
int main(){
    int arr[]={10,20,30,40};
    int size=4;
    lower(arr,size);
    return 0;
}