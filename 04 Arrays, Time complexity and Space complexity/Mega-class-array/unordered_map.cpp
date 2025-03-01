#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
    unordered_map<int,int> desk_map; //key: roll_no,value: desk number

    //insertion
    desk_map[0]=87;
    desk_map[2]=54;
    desk_map[3]=55;
    desk_map[2]=57; //re-assign because key=2 was already there
    //for loop
    //to iterate through map, make an iterator
    unordered_map<int,int>::iterator it;
// for( it=desk_map.begin();it!=desk_map.end();it++){
//         int key=it->first;
//             int value=it->second;
//         cout << "key: " << key << " " << "value: " << value << endl;

//     }
    //for each loop method-2
    for(auto it:desk_map){
        int key=it.first;
        int value=it.second;
        cout << "key: " << key << " " << "value: " << value << endl;

    }
     //find: very  fast in table/ap: TC:O(1) in average case
     if(desk_map.find(2)!=desk_map.end()){
        //found
        int val=desk_map[2];
        cout<<val<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    //deletion
    desk_map.erase(2);
    return 0;
}