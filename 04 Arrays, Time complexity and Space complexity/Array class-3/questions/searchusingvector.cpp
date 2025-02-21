#include<iostream>
#include<vector>
using namespace std;
bool search2darray(vector<vector<int>> arr,int target){
    int rowsize=arr.size();
    int colsize=arr[0].size();
    for(int rowindex=0;rowindex<rowsize;rowindex++){
        for(int colindex=0;colindex<colsize;colindex++){
            if(arr[rowindex][colindex]==target)
            return true;

        }
    }
    return false;

}
int main(){
    vector<vector<int>> arr(4,vector<int>(3,0));
    int rowsize=arr.size();
    int colsize=arr[0].size();
    for( int i=0; i<rowsize;i++){
        for(int j=0; j<colsize;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    int target=40;
    bool result=search2darray(arr,target);
    if(result==true){
        cout<<"target is found";
       
    }
    else{
        cout<<"target is not found.";
    }
    return 0;
}