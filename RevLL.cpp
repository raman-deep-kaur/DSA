/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/*
//approach 1
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*  prev = NULL;
        ListNode* curr = head;
        ListNode* forward ; 
        while(curr != NULL){
            forward = curr -> next; 
            curr -> next = prev; 
            prev = curr; 
            curr = forward;
        }  
        return prev;  
    }
};*/




// approach 2 - solves recursively 
/*
class Solution {
private:
    void reverse(ListNode* &head, ListNode* curr, ListNode* prev){
        if(curr==NULL){
            head = prev;
            return;
        }

        ListNode* forward = curr -> next;
        reverse(head, forward, curr);
        curr -> next = prev ; 
    }
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        reverse(head, curr, prev);
        return head;
    }
};*/


//approach 3 - recursive solution of 1st approach  
class Solution {
private:
    //this fxn will return head of reversed LL 
    ListNode* reverse(ListNode* head){
        //base case 
        if(head == NULL || head -> next == NULL){
            return head;
        }
        ListNode* chotaHead = reverse(head -> next);
        head -> next -> next = head; 
        head -> next = NULL;

        return chotaHead;

    }
public:
    ListNode* reverseList(ListNode* head) {
        return reverse(head);
    }
};
