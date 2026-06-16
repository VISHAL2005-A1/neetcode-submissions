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
    ListNode* reverse(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        ListNode* nextNode;

        while (temp) {
            nextNode = temp->next;
            temp->next = prev;
            prev = temp;
            temp = nextNode;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* middle = reverse(slow->next);
        ListNode* firsthalf = head;
        ListNode* temp = middle;
        while (temp) {
            if (temp->val != firsthalf->val) {
                return false;
            }
            temp = temp->next;
            firsthalf = firsthalf->next;
        }
        return true;
    }
};