#include<iostream>
#include<vector>
using namespace std;

bool CheckSorted(int arr[],int size,int index){

    //base case
    if(index==size-1) return true;

    bool currAns=false;
    bool Recurrans=false;
    //1 case mujhe solve krna hai
    if(arr[index+1]>arr[index]){
        currAns=true;
    }
    //recursive relation
    Recurrans=CheckSorted(arr,size,index+1);

    return (currAns && Recurrans);
}

void printSubsequences(string str, int i, string output,vector<string> &ans){
    //base case
    if(i == str.length()) {
        ans.push_back(output);
        return;
    }
    //ek case khud solve krunga
    char ch = str[i];
    //include ch
    printSubsequences(str,i+1,output + ch,ans);
    //exclude ch
    printSubsequences(str,i+1,output,ans);
    //baki recursion sambhalega

}

int main(){
    int arr[]={10,20,30,40,45,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    int index=0;
    int result=CheckSorted(arr,size,index);
   // cout<<"array is sorted or not -:"<<result<<endl;

    string str="abc";
    string output="";
    vector<string> ans;
    printSubsequences(str,index,output,ans);

    cout<<ans.size()<<endl;
    for(auto i:ans){
        cout<<i<<endl;
    }



    return 0;
}