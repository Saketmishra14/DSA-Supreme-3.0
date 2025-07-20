class TrieNode{
    public:
    char value;
    bool isterminal;
    unordered_map<int,TrieNode*> children;

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
        TrieNode* child;
        //present hai to wha chale jao 
        //absent hai to create krdo
        if(root->children.count(ch)==1){
            child=root->children[ch];
        }
        else{
            //absent
            child=new TrieNode(ch);
            //link
            root->children[ch]=child;
        }
        //baki recursion sambhal lega
        Insert(child,word.substr(1));

    }
     void findlcp(TrieNode* root, string &ans){
        //base case
        if(root->isterminal==true){
            return ;
        }
        //1 case mai solve krunga 
        TrieNode* child;
        if(root->children.size()==1){
            //1 hi bacha hai
            for(auto i:root->children){
                char ch=i.first;
                ans.push_back(ch);
                child =i.second;

            }
        }
            else{
                return;
            }
            //recursive call
            findlcp(child,ans);
        }

     
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        TrieNode* root=new TrieNode('-');
        //insert all words in trie
        for(auto word:strs){
            Insert(root,word);
        }

        //main logic
        string ans="";
        findlcp(root,ans);
        return ans;
        
    }
};