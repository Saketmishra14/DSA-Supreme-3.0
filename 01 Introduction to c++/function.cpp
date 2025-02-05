#include<iostream>
#include<cmath>
using namespace std;

void Printcounting(){
    for(int i=0;i<=5;i++){
        cout<<i<<"  ";

    }
    cout<<endl;
}
int sum(int a,int b){
   int result=a+b;
    return result;
}
void myname();
int multiplication(int x,int y,int z){
    int totalvalue=x*y*z;
    return totalvalue;
}


int main(){
    Printcounting();
    myname();
   int totalsum= sum(5,6);
   cout<<totalsum<<endl;
   int totalvalue=multiplication(3,4,5);
   cout<<totalvalue;

 return 0;
}
void myname(){
    cout<<"yash mishra"<<endl;
} 
