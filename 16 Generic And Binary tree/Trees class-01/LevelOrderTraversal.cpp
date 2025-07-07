#include<iostream>
#include<queue> 
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data=val;
        left=NULL;
        right=NULL;
    }
};

   Node* CreateTree(){
        cout<<"Enter the Value for Node-:";
        int value;
        cin>>value;

        if(value==-1) return NULL;
        else{
            Node* root=new Node(value);

            //left root recursive call
            root->left=CreateTree();

            //right root recursive call
            root->right=CreateTree();
            return root;
        }
    }

    void LevelOrderTraversal(Node* root){
          if(root == NULL) return;
    queue<Node*> q;
    // initial state maintain
    q.push(root);
    q.push(NULL);
    // logic-> steps A, B, C
    while(!q.empty()){
        // queue se nikalo
        Node* front = q.front();
        q.pop();
        if(front == NULL){
            // current level complete hogya hai
            cout<<endl;
            if(!q.empty()) q.push(NULL);
        }
        else{
            // print karao
            cout<< front->data << " ";
            // bache khalo-> queue me insert
            if(front->left != NULL) q.push(front->left);
            if(front->right != NULL) q.push(front->right);
        }
        
    }

    }


    int main(){
            Node* root;
    root = CreateTree();
    
    // LOT
    // 10 50 40 -1 -1 -1 30 20 -1 -1 -1
    LevelOrderTraversal(root);
    // cout << "printing root " << root->data << endl;

        return 0;
    }