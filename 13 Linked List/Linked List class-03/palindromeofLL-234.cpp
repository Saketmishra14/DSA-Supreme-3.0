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
ListNode* getmiddle(ListNode* head,ListNode* &middlenodekaprev){
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            middlenodekaprev=slow;
            slow=slow->next;
        }
    }
    return slow;
}

ListNode* reverseLL(ListNode* &prev,ListNode* &curr){
    //base case 
    if(curr==NULL){
        return prev;
    }
     ListNode* forward=curr->next;    
    //1-case mai solve krunga baki recursion krega 
    curr->next=prev;
    prev=curr;
    curr=forward;
    return reverseLL(prev,curr);

}
    bool isPalindrome(ListNode* head) {
        if(head==NULL) return true;
        if(head->next==NULL) return true;
        ListNode* firsthalfhead=head;
        ListNode* middlenodekaprev=NULL;
        ListNode* middlenode=getmiddle(firsthalfhead,middlenodekaprev);
        middlenodekaprev->next=NULL;

        //reverse the second half
        ListNode* prev=NULL;
        ListNode* curr=middlenode;
        ListNode* secondhalfhead=reverseLL(prev,curr);


        ListNode* temphead1=firsthalfhead;
        ListNode* temphead2=secondhalfhead;

        while(temphead1!=NULL){
            if(temphead1->val!=temphead2->val){
                return false;
            }
            else{
                temphead1=temphead1->next;
                temphead2=temphead2->next;
            }
        }
        return true;
        
    }
};