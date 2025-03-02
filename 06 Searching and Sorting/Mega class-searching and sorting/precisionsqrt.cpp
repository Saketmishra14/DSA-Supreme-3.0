#include<iostream>
using namespace std;
int MySquareRoot(int n){
    int s=0;
    int e=n;
    int mid=s+((e-s)>>1);
    int ans=0;
    while(s<=e){
        if(mid*mid<=n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+((e-s)>>1);
    }
    return ans;
}
double Precisionsqrt(int n){
    double sqrt=MySquareRoot(n);
    int precision =10;
    double step=0.1;
    while(precision --){
        double j=sqrt;
        while(j*j<=n){
            sqrt=j;
            j=j+step;

        }
        step/=10;
    }
    return sqrt;
}
int main(){
    int SquareRoot=8;
    int result=MySquareRoot(SquareRoot);
    cout<<"square root is-:"<<result;
    double ans = Precisionsqrt(SquareRoot);
    //cout<<ans<<endl; //cout prints only upto 5 precision
    //to print precision more than 5:
    printf("Precision sqrt:  %.8f\n", ans);
    return 0;
}