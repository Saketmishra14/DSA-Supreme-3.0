#include<iostream>
using namespace std;
int main(){
    char name[100];
    cout<<"Enter your name-:";
    cin.getline(name,100);
    cout<<"your name is "<<name<<endl;

    //Printing ASCII value of elements
    cout<<name[0]<<"->"<<(int) name[0]<<endl;
    cout<<name[1]<<"->"<<(int) name[1]<<endl;
    cout<<name[2]<<"->"<<(int) name[2]<<endl;
    cout<<name[3]<<"->"<<(int) name[3]<<endl;
    cout<<name[44]<<"->"<<(int) name[44]<<endl;
    cout<<name[10];

    //multiple lines input
    char arr1[100];
    cout<<"enter input: ";
    cin.getline(arr1, 80, '/t');
    cout<< endl << arr1 << endl;
    return 0;
}