#include<iostream>
using namespace std;
bool findtarget(int arr[],int size,int target){

    //traverse the entire array
    for (int i = 0; i < size; i++)
    {
        //element check condition
       if (arr[i]==target)
       {
       return true;
       }
       
    }
    //element not found condition hits 
    return false;
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=6;
   int result= findtarget(arr,size,target);
    cout<<size<<endl;
    if(result==false){
        cout<<"element not found.";

    }
    else{
        cout<<"element found.";
    }


}