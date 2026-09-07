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
        if (!head) return false;
        if (!head->next) return false;

        ListNode *curr = head;

        while(curr->next){
            if(curr->next == head) return true;

            ListNode *t = curr;

            curr = curr->next;

            t->next = head;
        }


        return false;
    }
};