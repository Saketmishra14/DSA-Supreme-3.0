#include<iostream>
#include<limits.h>
using namespace std;
int findmax(int arr[],int size){
    int maxvalue=INT_MIN;
    for(int i=0;i<size;i++){
        maxvalue=max(maxvalue,arr[i]);//In built method function
        // if(arr[i]>maxAns){
        //     maxAns=arr[i];
        // }
    }
    return maxvalue;

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
    cout<<"max number is:"<<findmax(arr,size);
    

    return 0;
}