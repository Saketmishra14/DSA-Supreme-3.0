#include<iostream>
using namespace std;

bool CheckSorted(int arr[],int size,int index){
    if(index==size-1) return true;

    bool currAns=false;
    bool Recurrans=false;
    //1 case mujhe solve krna hai
    if(arr[index+1]>arr[index]){
        currAns=true;
    }
    Recurrans=CheckSorted(arr,size,index+1);

    return (currAns && Recurrans);
    // if(currAns==true && Recurrans==true){
    //     return true;
    // }
    // else{
    //     return false;
    // }
}
int main(){
    int arr[]={10,20,30,40,45,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    int index=0;
    int result=CheckSorted(arr,size,index);
    cout<<"array is sorted or not -:"<<result;

    return 0;
}