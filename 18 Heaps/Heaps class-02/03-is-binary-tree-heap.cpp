// Structure of node
/*class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
  
  int nodecount(Node* tree){
      if(!tree) return 0;
      int left=nodecount(tree->left);
      int right=nodecount(tree->right);
      return 1+left+right;
  }
  
  bool isCBT(Node* tree,int i,int &n){
      if(!tree) return true;
      if(i>n) return false;
      
      return isCBT(tree->left,2*i,n) && isCBT(tree->right,2*i+1,n);
      
  }
  bool checkMaxProperty(Node*root){
        if(root==NULL) return true;
        if(root->left == NULL && root->right == NULL) return true;
        bool leftAns = checkMaxProperty(root->left);
        bool rightAns = checkMaxProperty(root->right);

        bool option1 = true;
        if(root->left && root->data < root->left->data) option1 = false;
        bool option2 = true;
        if(root->right && root->data < root->right->data) option2 = false;
        bool currAns = option1 && option2;
        if(currAns && leftAns && rightAns) return true;
        else return false;
    }
    bool isHeap(Node* tree) {
        int n=nodecount(tree);
        int i=1;
      bool ans=  isCBT(tree,i,n);
      bool checkans=checkMaxProperty(tree);
      
        // code here
        return ans&& checkans;
        
    }
};