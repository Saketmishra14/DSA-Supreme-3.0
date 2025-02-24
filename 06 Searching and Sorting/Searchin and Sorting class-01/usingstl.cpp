#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
   int n=9;
   int target=30;
   bool result=binary_search(arr,arr+n,target);
   cout<<result;
    return 0;
}