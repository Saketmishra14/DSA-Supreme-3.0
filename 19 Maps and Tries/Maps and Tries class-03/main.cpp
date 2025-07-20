#include<iostream>
#include<unordered_map>
using namespace std;
class TrieNode{
    public:
    char value;
    bool isterminal;
    unordered_map<int,TrieNode*> child;

    TrieNode(char data){
        value=data;
        isterminal=false;
    }
};

    void Insert(TrieNode* root,string word){
        //base case
        if(word.length()==0){
           root->isterminal=true;
            return ;
        }
        //1 case solve krna hai
        //1 char ko trie mai insert kr deta hu
        char ch=word[0];
        TrieNode* children;
        //present hai to wha chale jao 
        //absent hai to create krdo
        if(root->child.count(ch)==1){
            children=root->child[ch];
        }
        else{
            //absent
            children=new TrieNode(ch);
            //link
            root->child[ch]=children;
        }
        //baki recursion sambhal lega
        Insert(children,word.substr(1));

    }

    void removeintrie(TrieNode* root,string word){
        //base case
        //ek time aisa ayega ,jb words empty hoga root mai last character hoga
        if(word.length()==0){
            root->isterminal=false;
            return ;
        }


         //1 case mai solve krunga
        char ch=word[0];
        TrieNode* children;

        if(root->child.find(ch)!=root->child.end()){
            //present
            children=root->child[ch];
        }
        else{
            //absent
            return ;
        }
        return removeintrie(children,word.substr(1));


    }

    bool searchintrie(TrieNode* root,string word){
        //base case
        //check last character terminal hai ya nhi
        if(word.length()==0){
            //iska mtlb root mai last character pda hua hai
            return root->isterminal;
        }

        //1 case mai solve krunga
        char ch=word[0];
        TrieNode* children;

        if(root->child.find(ch)!=root->child.end()){
            //present
            children=root->child[ch];
        }
        else{
            //absent
            return false;
        }
        return searchintrie(children,word.substr(1));
    }
int main(){
    TrieNode* root=new TrieNode('-');
    Insert(root,"words");
    Insert(root,"cover");
    Insert(root,"car");
    Insert(root,"snake");
    Insert(root,"saket");
    Insert(root,"yash");
    Insert(root,"coward");
    Insert(root,"take");
    Insert(root,"main");
    Insert(root,"coverdrive");

    bool ans=searchintrie(root,"coverdrive");
    cout<<ans<<endl;
    removeintrie(root,"cover");
   bool ans1= searchintrie(root,"coverdrive");
   cout<<ans1;

    return 0;
}