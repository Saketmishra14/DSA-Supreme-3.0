#include<iostream>
using namespace std;
int MySquareRoot(int n){
    int s=0;
    int e=n;
    int mid=s+(e-s)>>1;
    int ans=0;
    while(s<e){
        if(mid*mid<=n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)>>2;
    }
    return ans;
}
int main(){
    int SquareRoot=100;
    int result=MySquareRoot(SquareRoot);
    cout<<"square root is-:"<<result;
    return 0;
}