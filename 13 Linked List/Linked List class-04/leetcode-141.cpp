#include<iostream>
#include<unordered_map>
using namespace std;
//very very important question

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*,bool> m;
        ListNode* temp=head;
        while(temp!=NULL){
            if(m[temp]==true){
                return true;
            }
            else{
                m[temp]=true;
         temp=temp->next;
            }
             

        }
        return false;
        
    }
};