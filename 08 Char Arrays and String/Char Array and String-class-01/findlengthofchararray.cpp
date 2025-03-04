#include<iostream>
using namespace std;
// int getlength(char arr[],int size){
//     int count=0;
//     int index=0;
//     while(arr[index]!='\0'){
//         count++;
//         index++;
//     }
//     //return count;
// }
int getlength(char arr[],int size){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]=='\0')
        break;
        else{
            count++;
        }
    }
    return count;
}
int main(){
    char arr[100];
    cout<<"enter your name-:";
    cin.getline(arr,100);
    cout<<"length is-:"<<getlength(arr,100);


    return 0;
}