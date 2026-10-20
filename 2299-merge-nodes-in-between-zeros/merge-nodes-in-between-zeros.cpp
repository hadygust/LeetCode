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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *curr = head;

        while (curr){
            if (curr->next && curr->next->val != 0) {
                curr->val += curr->next->val;
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
            }

            if(curr && curr->next->val == 0 && curr->next->next == NULL){
                curr->next = NULL;
            }
        }

        return head;
    }
};