#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of n -:";
    cin>>n;

    //part-1
    for (int row = 0; row<n; row++)
    {
        //stars
       for(int col=0;col<n-row;col++){
       cout<<"*";
        
       }
       //spaces
       for (int col = 0; col <2*row+1; col++)
       {
        cout<<" ";
       }
      
       //stars
        for(int col=0;col<n-row;col++){
       cout<<"*";
        
       }
       cout<<endl;
           

       
    }
    //part-2
    for(int row=0;row<n;row++){
        //stars
        for (int i = 0; i <=row; i++)
        {
            cout<<"*";
        }
        //spaces
        for (int i = 0; i <2*(n-row)-1; i++)
        {
            cout<<" ";
        }
        //stars
        for (int i = 0; i <=row; i++)
        {
            cout<<"*";
        }
        cout<<endl;
        
        
        
    }

   
    
    
    
    return 0;
}