#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>v){
    int size=v.size(); 
    cout<<v.capacity()<<endl;
    cout<<size;
    cout<<"printing vector: "<<endl;
    for(int i=0; i<size;i++){
        cout<<v[i]<< endl;
    }
}
int main(){
    //declare vector
    vector<int>v;
    //inserting values
    v.push_back(1);
    v.push_back(10);
    v.push_back(100);
    v.push_back(5);
    v.push_back(7);
    print(v);
    //pop: delete from end
    v.pop_back();
    print(v);
    cout<<v.capacity();
    return 0;
} 