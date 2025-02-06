/*
Pattern
N = 5
E
DE
CDE
BCDE
ABCDE
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of n -:";
    cin>>n;
    int i;
    
    for(i=1;i<=n;i++){
       
        for(char j=i;j>=1;j--){
            char p='E'-(j-1);
            cout<<p;
              
        }
        cout<<endl;
    }
return 0;
}
//complete