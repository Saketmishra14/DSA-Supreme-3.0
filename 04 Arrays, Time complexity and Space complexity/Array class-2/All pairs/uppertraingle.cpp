#include<iostream>
using namespace std;
void uppertraingle(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <n; j++)
        {
          cout<<arr[i]<<","<<arr[j]<<" ";
        }
        cout<<endl;
        
    }
    
}
int main(){
    int arr[]={10,20,30,40};
    int size=4;
    uppertraingle(arr,size);
    return 0;
} 