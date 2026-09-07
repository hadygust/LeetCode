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
    ListNode* reverseList(ListNode* head) {

        if(!head) return head;
        if (!head->next) return head;

        ListNode *res;
        bool first = true;

        while(head->next){
            ListNode *t = head;

            while(t->next->next){
                t = t->next;
            }
            cout << t->val << ' ';
            cout << endl; 

            if(first){
                res = t->next;
                first = false;
            }

            t->next->next = t;
            t->next = NULL;
        }

        return res;

    }
};