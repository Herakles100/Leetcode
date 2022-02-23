// Problem statement: https://leetcode.com/problems/middle-of-the-linked-list
// Author: https://github.com/Herakles100
// Time complexity: O(N)
// Space complexity: O(N)
// Two pointer approach

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* middle = head;
        ListNode* last = head;
        while (last != NULL && last->next != NULL){
            middle = middle -> next;
            last = last->next->next;
        }
        return middle;
    }
};
