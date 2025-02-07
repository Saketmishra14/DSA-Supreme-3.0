#include<iostream>
using namespace std;
int main(){
    cout<<(5^5^9)<<endl;//x-or gate
    cout<<(5|3)<<endl;//or gate
    cout<<(5&3)<<endl;//and gate
    cout<<~(8)<<endl;//not gate
    cout<<(25<<2)<<endl;//left shift
    cout<<(25>>2)<<endl; //right shift
     

     //checking even and odd using new way
     int n=2;
     if((n&1)==0)
     cout<<"even number";
     else
     cout<<"odd number";
    return 0;
}