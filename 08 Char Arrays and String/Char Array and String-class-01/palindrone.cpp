#include<iostream>
#include<cstring>
using namespace std;
bool checkpalindrome(char arr[]){
    int length=strlen(arr);
    int start=0;
    int end=length-1;
    while(start<=end){
        if(arr[start]==arr[end]){
            
            start++;
            end--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    char arr[50];
    cin.getline(arr,20);
    bool result=checkpalindrome(arr);
    if(result==true){
        cout<<arr<<" is palindrome.";
    }
    else{
        cout<<"no palindrome";
    }

    return 0;
}