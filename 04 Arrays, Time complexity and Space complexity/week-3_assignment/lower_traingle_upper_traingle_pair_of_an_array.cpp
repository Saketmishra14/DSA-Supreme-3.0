#include<iostream>
using namespace std;
void lowerTraingle(int matrix[3][3], int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i<j) cout<<"0"<<" ";
            else{
                cout<<matrix[i][j]<<" ";
            }
            
        }
        cout<<endl;
    }
}
void upperTraingle(int matrix[3][3], int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i>j) cout<<"0"<<" ";
            else{
                cout<<matrix[i][j]<<" ";
            }
            
        }
        cout<<endl;
    }
}
int main(){
    int matrix[3][3]={{1,2,3},
                       {4,5,6},
                        {7,8,9}};
    int col=3;
    int row=3;
    cout<<"lower traingle -:"<<endl;

    lowerTraingle(matrix,row,col);
    cout<<"upper traingle -:"<<endl;
    upperTraingle(matrix,row,col);
    return 0;
}