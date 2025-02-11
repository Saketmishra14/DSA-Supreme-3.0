#include<iostream>
using namespace std;
void printZeroesAndOnes(int arr[],int size){
    int countzero=0;
    int countone=0;
    //counting 
    for(int i=0;i<size;i++){
        if(arr[i]==0)
        countzero++;
        else{
            countone++;
        }
    }
    //sort one and zero
    int i=0;
    for (; i < countzero; i++)
    {
        arr[i]=0;
    }
    for (int i = countzero; i < size; i++)
    {
    arr[i]=1;
    }

      //method-2
    // fill(arr,arr+ zeroCount,0);
    // fill(arr+zeroCount,arr+n,1);
    
    
}
int main(){
    int arr[]={0,1,1,1,0,0,1,1};
    int size=8;
    printZeroesAndOnes(arr,size);
    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }
   

}