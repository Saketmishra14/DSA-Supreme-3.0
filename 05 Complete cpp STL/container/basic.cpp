#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> mark{5};
    vector<int> ans{11,2,3,4,5};
    cout<<*(ans.end()-1);
    cout<<*(ans.begin());

   
    ans.push_back(55);
    ans.push_back(1);
    ans.pop_back();
     cout<<endl<<ans.front();
    cout<<endl<<ans.back();

    cout<<endl<<ans.size();

    cout<<endl<<ans.at(3);
    cout<<endl<<ans.capacity();
    swap(mark,ans);
    cout<<mark.size()<<endl;
    cout<<*ans.begin();

    // for(auto i: ans){
    //      cout<<i<<endl;
    // }

    return 0;
}