#include<iostream>
#include<queue>
using namespace std;
int main(){
    deque<int> de;
    de.push_back(10);
    de.push_back(20);
    de.push_back(30);
    de.push_back(40);
    de.push_front(100);
    de.push_front(200);

     //insert()
     de.insert(de.begin(), 101);

     //erase()
     de.erase(de.begin());
 
     //pop()
     de.pop_front();
     de.pop_back();
 
     //size()
     cout<<"size: "<<de.size()<<endl;
 
     //front()
     cout<<de.front()<<endl;
 
     //back()
     cout<<de.back()<<endl;
 
     //empty()
     if(de.empty() == true){
         cout<<"deque is empty"<<endl;
     }
     else{
         cout<<"deque is not empty"<<endl;
     }
 
     //iterate
     deque<int>::iterator it= de.begin();
     while(it!= de.end()){
         cout<< *it << " ";
         it++;
     }
     cout<<endl;
 
     //operator[]
     cout<<de[0]<<endl;
 
     //at()
     cout<<de.at(3)<<endl;
 
    return 0;
}