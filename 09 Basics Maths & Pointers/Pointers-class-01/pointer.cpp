#include<iostream>
using namespace std;
// void solve(int* arr, int size) {
//     cout << sizeof(arr) << endl;
// }

// void solve(vector<int> &v) {
//     cout << sizeof(v) << endl;
// }
int main(){
    int a=5;
    //cout<<&a;
   // int* p=&a;
   // int** q=&p;
    //int** r=q;
   // cout<<endl<<**q<<endl;
   // cout<<sizeof(r)<<endl;
    // int* z;
    // cout<<z;

    // int b=5;
    //cout<<&b;
//     int *ptr=&a;
//     cout<<a<<endl;
//     cout<<&a<<endl;
//    // cout<<*a<<endl;
//     cout<<ptr<<endl;
//     cout<<&ptr<<endl;
//     cout<<*ptr<<endl;
//     int *result=ptr+1;
//     cout<<result<<endl;
//     int sum=*ptr/2;
//     cout<<*ptr/2<<endl;
//     cout<<*ptr+1<<endl;

//     int b=4;
//     int* p=&b;
//     int* q=p;
//     cout<<q;
   int arr[]={2,3,4,5,6,7,7,8};
    int* ptr=arr;
    cout<<ptr<<endl;
    cout<<ptr+1<<endl;
    cout<<arr<<endl;
    cout<<*(arr+1)<<endl;


    // char arrays
    char ch[100]="loveBabbar";
    char*cptr=ch;
    cout<<cptr;
    // char arrays
    char c[100]="loveBabbar";
    cout<<"base address:" <<&c<<endl;
    char*ctr=c;
    cout<<ctr<<endl;
    cout<<"c:"<<c<<endl;
    cout<<"&c:"<<&c<<endl;
    cout<<"c[0]:"<<c[0]<<endl;
    cout<<"&ctr:"<<&ctr<<endl;
    cout<<"*c:"<<*c<<endl;
    cout<<"*(ctr+3):"<<*(ctr+3)<<endl;
    // remember this: it doesnt give 104, it prints lovebabbar
    cout<<"ctr:"<<ctr<<endl;
    cout<<"ctr+3:"<<ctr+3<<endl;
    char d='a';
    char *dtr=&d;
    cout<<dtr<<endl;

    char race[100]="racecar";
    char*rtpr=&race[0];
    cout<<"race: "<<race<<endl;
    cout<<"&race: "<<&race<<endl;
    cout<<"*(race+3): "<<*(race+3)<<endl;
    cout<<"rtpr: "<<rtpr<<endl;
    cout<<"&rtpr: "<<&rtpr<<endl;
    cout<<"*(rtpr+3): "<<*(rtpr+3)<<endl;
    cout<<"rtpr+2: "<<rtpr+2<<endl;
    cout<<"*rtpr: "<<*rtpr<<endl;
    cout<<"rtpr+4: "<<rtpr+4<<endl;
    return 0;
}