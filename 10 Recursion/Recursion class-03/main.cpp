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

void printSubsequences(string str, int i, string output){
    //base case
    if(i == str.length()) {
        cout << output << endl;
        return;
    }
    //recursive call
    char ch = str[i];
    //include ch
    printSubsequences(str,i+1,output + ch);
    //exclude ch
    printSubsequences(str,i+1,output);
}

int main(){
    int arr[]={10,20,30,40,45,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    int index=0;
    int result=CheckSorted(arr,size,index);
    cout<<"array is sorted or not -:"<<result<<endl;

    string str="abc";
    string output="";
    printSubsequences(str,index,output);



    return 0;
}