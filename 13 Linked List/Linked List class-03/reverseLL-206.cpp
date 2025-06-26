#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 //* Definition for singly-linked list.
  struct ListNode {
     int val;
    ListNode *next;
     ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
ListNode* ReverseLL(ListNode* &prev,ListNode* &curr){
    //base case 
    if(curr==NULL){
        return prev;
    }
     ListNode* forward=curr->next;    
    //1-case mai solve krunga baki recursion krega 
    curr->next=prev;
    prev=curr;
    curr=forward;
    return ReverseLL(prev,curr);

}
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* newnode=ReverseLL(prev,curr);
        return newnode; 
    }
};