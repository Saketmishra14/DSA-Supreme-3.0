#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of n -:";
    cin>>n;
    for (int row = 0; row<n; row++)
    {
        //spaces
       for(int col=0;col<n-row-1;col++){
       cout<<" ";
        
       }
       //star
       for (int col = 0; col <row+1; col++)
       {
          if(row==0||row==n-1||col==0||col==row ){
                cout<<"* ";
            }
            else{
                cout<<"  "; //cout<<"* "; to print full pyramid
            }
        
       }
       cout<<endl;
       
    }
    cout<<endl;
    
    return 0;
}