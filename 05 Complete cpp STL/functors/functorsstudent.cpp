#include<iostream>
using namespace std;
class student{
    public:
    int marks;
    string name;
    student(){

    }
    student(int m,string n){
        this->marks=m;
        this->name=n;
    }
};
//functors

class studentcomparator{
    public:
    bool operator()(student a, student b){
        return a.marks<b.marks;
    }
};
int main(){
    student s1;
    student s2;
    s1.marks=9;
    s1.name="ayush";
    s2.marks=63;
    s2.name="yash";
    studentcomparator cmp;
    if(cmp(s1,s2)){
        cout<<"yash has less marks";
    }
    else{
        cout<<"yash has more marks"<<endl;
    }
    return 0;
}