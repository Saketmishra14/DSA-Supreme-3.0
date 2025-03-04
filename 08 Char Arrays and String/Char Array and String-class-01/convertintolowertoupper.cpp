#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
void ConvertUpper(char arr[],int n){
    int len=strlen(arr);
    for(int i=0;i<len;i++){
        if(arr[i]>='a'&& arr[i]<='z'){
            arr[i]=arr[i]-'a'+'A';
        }

    }
}
void Convertlower(char arr[],int n){
    int len=strlen(arr);
    for(int i=0;i<len;i++){
        if(arr[i] >= 'A' && arr[i] <= 'Z'){
            arr[i]=arr[i]-'A'+'a';
        }

    }
}
int main(){
    char arr[100];
    cin.getline(arr,100);
    ConvertUpper(arr,100);
    Convertlower(arr,100);
    cout<<arr;

    return 0;
}