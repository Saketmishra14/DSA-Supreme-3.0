#include<iostream>
#include<cstring>
using namespace std;
void solve(int* arr,int size){
    cout<<sizeof(arr)<<endl;
}
void stlsolve(vector<int> v){
    cout<<sizeof(v)<<endl;
}
int main(){
    //int arr[]={10,23,34,54,56,66};
    int size=6;
    //solve(arr,size);

    //dynamic memory allocation
    vector<int> v;
    v.push_back(19);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.push_back(5);
    stlsolve(v);

    // MEMORY ALLOCATION
    //integer->stack memory
    int a=5;
    cout<<a<<endl;
    //integer->heap memory
    int *p=new int;
    *p=100;
    cout<<*p<<endl;
    //deallocate->delete
    delete p;

    //arrar->stack memory
    int arr[5]={0};
   // cout<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl<<arr[3]<<endl;

    //array->heap memory
    int *arr1=new int[5];
   // cout<<arr1[0]<<endl<<arr1[1]<<endl<<arr[2]<<endl<<arr[3]<<endl;

    //2D array->stack memory
    int arr2[2][4]={
        {2,4,6,8},
        {1,2,3,4}
    };
    //2D array->heap memory
    //4->row count; 3->col count 
    int** brr=new int*[4];
    for(int i=0;i<4;i++){
        brr[i]=new int[3];
    }
    //taking input
    for(int i=0;i<4;i++){
        for (int j = 0; j < 3; j++)
        {
            cin>>brr[i][j];
        }
        cout<<endl;
    }

    //printing output
    cout<<"printing 2-d array-:";
    for(int i=0;i<4;i++){
        for (int j = 0; j < 3; j++)
        {
            cout<<brr[i][j];
        }
        cout<<endl;
    }

      for(int i=0;i<4;i++){
        delete[] brr[i];
    }




    return 0;
}