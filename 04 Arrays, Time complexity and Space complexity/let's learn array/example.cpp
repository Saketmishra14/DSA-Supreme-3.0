#include<iostream>
using namespace std;
void solve(const int arr[],int n){
    cout<<"modified array -:";
    for(int i=0;i<n;i++){
        cout<<arr[i]*10<<endl;
         
    }
    cout<<endl;
    return;
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    solve( arr, size);
    cout<<"original array";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}