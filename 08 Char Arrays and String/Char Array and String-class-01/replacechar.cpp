#include<iostream>
using namespace std;
void Replacechar(char arr[],int size){
    int index=0;
    while(arr[index]!='\0'){
        char originalchar='@';
        char newchar=' ';
        if(arr[index]==originalchar){
              arr[index]=newchar;
              cout<<arr[index];  
        }
        else{
            cout<<arr[index];
        }
        index++;

    }
    return ;
}

int main(){
    char arr[100];
    cout<<"enter your name -:";
    cin.getline(arr,100);
    Replacechar(arr,100);
    return 0;
}