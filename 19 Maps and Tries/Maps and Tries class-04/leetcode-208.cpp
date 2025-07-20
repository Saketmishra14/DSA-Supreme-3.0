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

    bool searchprefix(TrieNode* root,string word){
        //base case
        //check last character terminal hai ya nhi
        if(word.length()==0){
            //iska mtlb root mai last character pda hua hai
            return true;
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
        return searchprefix(children,word.substr(1));
    }
class Trie {
public:
        TrieNode* root;
    Trie() {
        root=new TrieNode('-');     
    }
    
    void insert(string word) {
        Insert(root,word);
        
    }
    
    bool search(string word) {
        bool ans=searchintrie(root,word);
        return ans;   
    }
    
    bool startsWith(string prefix) {
        bool ans=searchprefix(root,prefix);
        return ans;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */