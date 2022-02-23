// Problem statement: https://leetcode.com/problems/remove-nth-node-from-end-of-list
// Author: https://github.com/Herakles100
// Time complexity: O(N)
// Space complexity: O(1)
// Two pointer approach

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fast = head, *slow = head;
        for(auto i=0; i<n; ++i)
            fast = fast->next;
        if(!fast)
            return head->next;
        while(fast->next)
            fast = fast->next, slow=slow->next;
        slow->next = slow->next->next;
        return head;
    }
};
