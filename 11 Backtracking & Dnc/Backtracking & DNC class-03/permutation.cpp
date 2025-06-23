#include<iostream>
#include<vector>
#include<string>
using namespace std;
void Printpermutation(string str,int i){
    //base case
    if(i>=str.length()){
        cout<<str<<endl;
        return ;
    }

    for(int j=i;j<str.length();j++){
        //ek case mai solve krunga baki ka case recursion sambhalega
        swap(str[i],str[j]);

        Printpermutation(str,i+1);
        //BACKTRACK
        swap(str[i],str[j]);
    }

}
int main(){
    string str="abc";
    int i=0;
    Printpermutation( str,i);

    return 0;
}