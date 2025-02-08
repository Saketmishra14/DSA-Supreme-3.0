#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of n -:";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for(int j=1;j<=i;j++){
            //numbers
            if(i==j||i==1||j==1||i==n)
            cout<<j;
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}