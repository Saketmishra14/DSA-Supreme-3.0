#include<iostream>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
     ListNode() : val(0), next(nullptr) {}
   ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if(head==NULL) return head;
        if(head->next==NULL) return head;

        ListNode* prev=head;
        ListNode* temp=head->next;
        while(temp!=NULL){
            if(prev->val==temp->val){
                //duplicate found
                prev->next=temp->next;
                temp->next=NULL;
                delete temp;
            }
            else{
                //duplicate not found
                prev=prev->next;

            }
            //temp ko phir sai prev kai next pai point kro 
            //ye step bhul jaoge yaad rkhna hai
            temp=prev->next;
        }
        return head;
        
    }
};