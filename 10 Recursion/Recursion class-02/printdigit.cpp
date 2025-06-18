#include<iostream>
using namespace std;
void PrintDigit(int n){
    //base case
    if(n==0){
        return;
    } 
    //recursive relation
    int NewNum=n/10;
    PrintDigit(NewNum);
     //processing 
    int num=n%10;
    cout<<num<<" ";
}
int main(){
    int n;
    cout<<"enter the number -:";
    cin>>n;
    PrintDigit(n);
    return 0;
}