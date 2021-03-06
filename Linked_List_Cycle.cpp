/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * @param head: The first node of linked list.
     * @return: True if it has a cycle, or false
     */
    bool hasCycle(ListNode *head) {
        // write your code here
        ListNode *dummy = new ListNode(INT_MIN);
        dummy->next = head;
        auto fast = dummy, slow = dummy;
        while (fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if (fast == slow){
                return true;
            }
        }
        return false;
    }
};



