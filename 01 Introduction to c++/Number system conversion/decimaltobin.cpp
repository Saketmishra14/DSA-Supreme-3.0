#include<iostream>
using namespace std;
int binarytodecimal1(int n){
    int bit=0;
    while (n>0)
    
    {
          bit=n%2;
         cout<<bit;
         n=n/2;
    }
    return 0;
}
int binarytodecimal2(int n){
    
}
int main(){
    int n;
    cout<<"enter decimal number-:";
    cin>>n;
    int binary=binarytodecimal1(n);
    cout<<binary;



}