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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        map<int, int> m;

        for(int n : nums){
            m[n] = 1;
        }

        while(m.find(head->val) != m.end()){
            auto temp = head;
            head = head->next;
            temp->next = NULL;
        }

        auto it = head;

        while(it->next != NULL){

            cout << it->val << " ";

            if(m.find(it->next->val) != m.end()){
                auto temp = it->next;
                if(temp->next != NULL) {
                    it->next = temp->next;
                    temp->next = NULL;
                    continue;
                } else {
                    it->next = NULL;
                    break;
                }
            }

            it = it->next;
        }

        return head;
    }
};