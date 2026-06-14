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

class Solution {
   public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      
        ListNode* result = new ListNode(0);
        ListNode* temp = result;
        // int sum = 0;
        int rem = 0;
        while (l1 != NULL || l2 != NULL || rem != 0) {
           int sum = rem;
            if (l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }
            rem = sum / 10;
            int digit = sum % 10;

            temp->next = new ListNode(digit);
            temp = temp->next;
        }
        return result->next;
    }
};
