/*
Pattern
1
23
345
4567
*/
#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"enter n value-:";
    cin>>n;
    int i=1;
    while(i<n){
        int j = 1,count=i;
        while(j<=i){
            cout<<count;
            j = j + 1;
            count=count+1;
        }
        cout<<"\n";
        i = i + 1;
    }
}