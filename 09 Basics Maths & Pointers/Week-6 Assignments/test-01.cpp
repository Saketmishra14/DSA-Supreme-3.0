#include<iostream>
#include<cstring>
using namespace std;
// int f(int x,int *py,int **ppz){
//     int y,z;
//     **ppz+=1;
//     z=**ppz;
//     *py+=2;
//     y=*py;
//     x+=3;
//     return x+y+z;
// }
void q(int z){
    z+=z;
    cout<<z<<" ";
}
void p(int *y){
    int x=*y+2;
    q(x);
    *y=x-1;
    cout<<x<<" ";
    }
int main(){
    //int b=12;
    //cout<<(6359 % 320)<<endl;
    // string* x,y;
    // y="yash";
    // x=&y;
   // cout<<*x<<endl;
    //int a=10,b=20,c=30;
    // int arr[]={10,20,30};
    // int *ptr=arr;
    // ptr+=5;
    // cout<<ptr;
    //cout<<arr[1];
    // char arr[20];
    // int i;
    // for(i=0;i<10;i++)
    //     *(arr + i) = 65 + i;
    //     *(arr+i)='\0';
    //     cout<<arr;

    // char *ptr;
    // char str[]="abcdefg";
    // ptr=str;
    // ptr+=5;
    // cout<<ptr<<endl;
    // int c,*b,**a;
    // c=4;
    // b=&c;
    // a=&b;
    // cout<<f(c,b,a);
    // int ***r,**q,*p,i=8;
    // p=&i;
    // (*p)++;
    // q=&p;
    // (**q)++;
    // r=&q;
    // cout<<*p<<" "<<**q<<" "<<***r;
    int const x=5;
    //int const *p=&x;
    //++x;
   // p(&x);
    cout<<x<<endl;

    return 0;
}