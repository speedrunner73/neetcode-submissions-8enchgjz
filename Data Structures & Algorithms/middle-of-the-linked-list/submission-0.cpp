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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int sz = 0;
        while (temp != nullptr) {
            ++sz;
            temp = temp->next;
        }

        ListNode* curr = head;
        for (int i = 0; i < sz / 2; ++i) {
            curr = curr->next;
        }
        return curr;
    }
};