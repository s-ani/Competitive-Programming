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
    bool hasCycle(ListNode *head) {
        if(!head || !head->next) {
            return false;
        }
        
        ListNode* fast = head;
        ListNode* slow = head->next;
        
        while(fast && slow) {
            
            if(!fast->next || !slow->next || !slow->next->next) {
                return false;
            }
            
            fast = fast->next;
            slow = slow->next->next;
            
            if(fast == slow) {
                return true;
            }
        }
        
        return false;
    }
};