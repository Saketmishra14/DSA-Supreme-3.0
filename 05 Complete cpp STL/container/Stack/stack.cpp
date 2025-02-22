#include<iostream>
#include<stack>
using namespace std;
int main(){
     //creation
     stack<int> st;
    
     //insertion
     //push()
     st.push(10);
     st.push(20);
     st.push(30);
     st.push(40);
 
     //size()
     cout<<"size: " << st.size()<<endl;

     st.pop();
     cout<<st.top()<<endl;
     if(st.empty()==true){
        cout<<"stack is empty ";
     }
     else{
        cout<<"stack is not empty.";
     }
    return 0;
}