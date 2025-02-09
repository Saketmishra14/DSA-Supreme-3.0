#include<iostream>
#include<limits.h>
using namespace std;
int findmin(int arr[],int size){
    int minvalue=INT_MAX;
    for(int i=0;i<size;i++){
        minvalue=min(minvalue,arr[i]);//In built method function
        // if(arr[i]>maxAns){
        //     maxAns=arr[i];
        // }
    }
    return minvalue;

}
int main(){
    int arr[50];
    int size;
    cout<<"Enter the number of element -:";
    cin>>size;
    for (int i = 0; i <size; i++)
    {
        cout<<"Enter the input value for index:"<<i<<endl;
        cin>>arr[i];
    }
    cout<<"min number is:"<<findmin(arr,size);
    

    return 0;
}