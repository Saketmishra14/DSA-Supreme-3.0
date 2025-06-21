#include<iostream>
using namespace std;
int Solve(int n){
    //base case 
    if(n==1) return 0;
    if(n==2) return 1;

    //recursive call
    int ans=(n-1)*(Solve(n-2)+Solve(n-1));
    return ans;
    
}
int main(){
    int n=4;
    int ans=Solve(n);
    cout<<ans;
    return 0;
}