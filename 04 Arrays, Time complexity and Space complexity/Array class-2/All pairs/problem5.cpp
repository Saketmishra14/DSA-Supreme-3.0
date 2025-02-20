#include<iostream>
using namespace std;
void lowertraingle(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = n-i-1; j >=0; j--)
        {
          cout<<arr[i]<<","<<arr[j]<<" ";
        }
        cout<<endl;
        
    }
    
}
int main(){
    int arr[]={10,20,30,40};
    int size=4;
    lowertraingle(arr,size);
    return 0;
}