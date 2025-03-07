#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
      //creation 
      map<string,string>table;
      //insertion
      //1st method
      table["in"]="india";
      //2nd method 
      table.insert(make_pair("en","england"));

      //3rd method
      pair<string, string>p;
      p.first="br";
      p.second="brazil";
      table.insert(p);

      //size()
      cout<<"size:"<<table.size()<<endl;

      //clear()
      //table.clear();
       
      //erase()
      //table.erase(table.begin(),table.end());

    //   empty(); table.erase(table.begin(),table.end());

    //empty()
    if(table.empty()==true){
        cout<<"map is empty";
    }
    else{
        cout<<"map is not empty"<<endl;
    }

    //at()
    cout<<table.at("in")<<endl;

    //update 
    table.at("in")="Indian";
    table["in"]="india2";
    cout<<table.at("in")<<endl;

    //iterate 
    map<string,string>:: iterator it=table.begin();
while(it !=table.end())
{
    pair<string,string>p=*it;
    cout<<p.first<<" "<<p.second<<endl;
    it++;
}

//find()
if(table.find("in")!=table.end()){
    cout<<"key found"<<endl;
}
else{
    cout<<"key not found"<<endl;
}

// count()
    if(table.count("in")==0){
        cout<<"key not found"<<endl;
    }
    else{
        cout<<"key found"<<endl;
    }
    return 0;
}