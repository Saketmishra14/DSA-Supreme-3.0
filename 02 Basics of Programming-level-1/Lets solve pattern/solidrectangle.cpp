#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter no. of row-:";
    cin>>row;
    cout<<"enter no. of columns-:";
    cin>>col;

    //outer loop
    for (int i = 0; i <row; i++)
    {
        //inner loop
        for(int j=0;j<col;j++){
            cout<<"* "<<" ";

        }
       cout<<endl;
    }
    

     
    return 0;
}