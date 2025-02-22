#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main(){
    //creation 
    vector<int> mylist;
   // vector<int> mylist(6,5);
    //insertion
    //push_back()
    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(30);
    mylist.push_back(10);
    mylist.push_back(40);
    //push_front()
    //mylist.push_front(100);
    
    //insert
    mylist.insert(mylist.begin(),500);
    vector<int> first;
 first.push_back(1);
 first.push_back(2);
 first.push_back(3);
 for (int i : first)
 {
 cout << i << " ";

 }
  //insert
  mylist.insert(mylist.begin(),500);

  //erase
  mylist.erase(mylist.begin());

  //pop_back
  mylist.pop_back();
  //pop_front
  mylist.pop_back();
  
  //size()
  cout<<"size: "<<mylist.size()<<endl;

  //clear()
  //myList.clear();
  
  //empty()
  if(mylist.empty()==true){
      cout<<"list is empty"<<endl;
  }
  else{
      cout<<"list is not empty"<<endl;
  }
   //front 
   cout<<mylist.front()<<endl;
    
   //back 
   cout<<mylist.back()<<endl;


  
    list<int> mylist1 = {10, 20, 30, 40, 20, 50};

    cout << "Before removing: ";
    for (int val : mylist1) {
        cout << val << " ";
    }
    cout << endl;

    // Removing all occurrences of 20
    mylist1.remove(20);

    cout << "After removing 20: ";
    for (int val : mylist1) {
        cout << val << " ";
    }
    cout << endl;

    //swap()
    cout<<"after swapping: ";
    mylist1.swap(mylist1);
    list<int>::iterator it3 = mylist1.begin();
    while(it3!=mylist1.end()){
        cout<< * it3<<" ";
        it3++;
    }
    cout<<endl;


    return 0;
}


  