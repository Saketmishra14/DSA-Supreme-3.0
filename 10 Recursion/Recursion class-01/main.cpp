#include<iostream>
using namespace std;
int getfactorial(int n){
    if(n==0 || n==1)
        return 1;
     
     return n* getfactorial(n-1);
}

//print counting from N to 1
void Printcounting(int n){
    if(n==0)
    return;
    cout<<n<<" ";
    Printcounting(n-1);
}

//print counting from 1 to N
void Printcounting1(int n){
    if(n==0)
    {
        return;   
    }
    Printcounting1(n-1);
     cout<<n<<" ";
}

//power
int pow(int n){
    if(n==0)
    return 1;

    //recursive relation
    return 2*pow(n-1);
}

//fibonaci series
int fib(int n){
    if(n==1||n==0){
        return n;
    }

    return fib(n-1)+fib(n-2);
}

//sum of n terms
int getsum(int n){
    if(n==0){
        return 0;
    }
    return n+getsum(n-1);
}

int main(){
   int n;
   cout<<"enter the value of n-:";
   cin>>n;
   int result=getfactorial(n);
   cout<<"factorial of "<<n<<" is -:"<<result<<endl;

   //print counting from N to 1
   Printcounting(n);
   cout<<endl;
   //print counting from 1 to N
   Printcounting1(n);
   cout<<endl;

   int power=pow(n);
    cout<<"2 to the power "<<n<<" is -:"<<power<<endl;

    //fibonnaci number call
    int fibonacci=fib(n);
    cout<<"fibonacci number is -:"<<fibonacci<<endl;

    //get sum function call
    int totalsum=getsum(n);
    cout<<"sum of 1 to "<<n<<" is -:"<<totalsum;


    return 0;
}