#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
int main(){
    //creation
    unordered_map<int,string> un_map;
    map<int,string> map;
    //insertion
    //insert
    un_map[1]="saket";
    un_map[2]="yash";
    un_map[3]="ayush";
    un_map[4]="saket";

    //ordered map
    map[1]="saket";
    map[2]="yash";
    map[4]="saket";
    map[3]="ayush";

    //traversal
    cout<<"printing unordered map -:"<<endl;

    for(auto i: un_map){
        cout<<i.first<<"-> "<<i.second<<endl;
    }
    //traversal for ordered map
    cout<<"printing ordered map-:"<<endl;
    for(auto i: map){
        cout<<i.first<<" -> "<<i.second<<endl;
    }

    //find function
    if(map.find(5)==map.end()){
        cout<<"5 nhi mila"<<endl;
    }
    else{
        cout<<"5 mil gya"<<endl;
    }

        if(un_map.count(3) == 0){
        cout << "30 nhi mila"<<endl;
    }
    else{
        cout << " found 30" <<endl;
    }

    //search 
    // count
    cout<<map.count(3);

    return 0;
}