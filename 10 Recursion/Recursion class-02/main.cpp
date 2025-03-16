#include<iostream>
using namespace std;

//print an array using recursion
void PrintArray(int arr[],int size,int index){
    if(index==size){
        return ;
    }
    cout<<arr[index]<<" ";
    PrintArray(arr,size,index+1);
}

//seraching value using recursion
bool Findtarget(int arr[],int size,int target,int index){
    if(index>=size){
        return false;
    }
    if(arr[index]==target){
        return true;
    }
     return Findtarget(arr,size,target,index+1);
}

//finding maximum value in an array
void Maxvalue(int arr[],int size,int index, int &maxi){
    //base case
    if(index==size){
        return ;
    }
    //recursive relation
    maxi=max(maxi,arr[index]);
    Maxvalue(arr,size,index+1,maxi);
    //processing
}

//finding minimum value in an array
void Minvalue(int arr[],int size,int index, int &mini){
    //base case
    if(index==size){
        return ;
    }
    //recursive relation
    mini=min(mini,arr[index]);
    Minvalue(arr,size,index+1,mini);
    //processing
}

//print odds number in an array 
void PrintallOdds(int arr[],int size,int index){
    if(index==size){
        return ;

    }
    if(arr[index] & 1)
    cout<<arr[index]<<" ";
    PrintallOdds(arr,size,index+1);
}

//print evens numbers in an array
void PrintallEvens(int arr[],int size,int index){
    if(index==size)
    return ;
    if((arr[index] &1)==0)
    cout<<arr[index]<<" ";
    PrintallEvens(arr,size,index+1);
}

void PrintDigits(int number){
    if(number==0) return ;

    int digits=number%10;
    
    number/=10;
    PrintDigits(number);
    cout<<digits<<",";
}
int main(){
    int arr[]={100,20,33,40,5,60};
    int size=6;
    int index=0;
    //function call 
    PrintArray(arr,size,index);
    cout<<endl;

    //seraching value
    int target=60;
    bool result=Findtarget(arr,size,target,index);
    if(result==true){
        cout<<"target is found."<<endl;
    }
    else{
        cout<<"target not found"<<endl;
    }

    //maximum value in an array
    int maximum=INT_MIN;
    Maxvalue(arr,size,index,maximum);
    cout<<"maximum value of array is -:"<<maximum<<endl;

    //minimum value in an array
    int minimum=INT_MAX;
    Minvalue(arr,size,index,minimum);
    cout<<"minimum value of an array is -:"<<minimum<<endl;

    //print odds value function call
    PrintallOdds(arr,size,index);
    cout<<endl;

    //print all evens value function call
    PrintallEvens(arr,size,index);
    cout<<endl;

    //print digits 
    PrintDigits(21478);
    return 0;
}