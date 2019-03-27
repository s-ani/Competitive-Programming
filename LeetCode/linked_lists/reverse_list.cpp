/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr) {
            ListNode* tmpNext = curr->next;
            curr->next = prev;
            prev = curr;
            curr = tmpNext;
        }
        
        return prev;
    }
};