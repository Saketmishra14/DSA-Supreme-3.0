#include<iostream>
#include<vector>
using namespace std;
bool search2darray(int arr[][4],int rowsize,int colsize,int target){
    for(int rowindex=0;rowindex<rowsize;rowindex++){
        for(int colindex=0;colindex<colsize;colindex++){
            if(arr[rowindex][colindex]==target)
            return true;

        }
    }
    return false;

}
int main(){
    int arr[3][4]={{10,20,30,40},{50,55,57,59},{69,72,79,89}};
    int rowsize=3;
    int colsize=4;
    int target=79;
    int result=search2darray(arr,rowsize,colsize,target);
    if(result==1){
        cout<<"target is found";
       
    }
    else{
        cout<<"target is not found.";
    }

    return 0;
}