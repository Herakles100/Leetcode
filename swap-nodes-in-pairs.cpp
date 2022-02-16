
// Problem statement: https://leetcode.com/problems/swap-nodes-in-pairs/
// Author: https://github.com/Herakles100
// List manipulation

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode **current = &head, *from, *to;
        while ((from = *current) && (to = from->next)) {
            from->next = to->next;
            to->next = from;
            *current = to;
            current = &(from->next);
        }
        return head;
    }
};
